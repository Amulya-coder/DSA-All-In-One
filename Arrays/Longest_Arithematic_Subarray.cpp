//Asked in Google Kickstart
/*
Problem
An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal. For example, [9, 10], [3, 3, 3],
and [9, 7, 5, 3] are arithmetic arrays, while [1, 3, 3, 7], [2, 1, 2], and [1, 2, 4] are
not arithmetic arrays.
*/

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int pd=a[1]-a[0];
        int ans=2;
        int curr=2;

        for(int j=2;j<n;j++){
            
            if(pd==a[j]-a[j-1]){
               curr++; // Increament the current subarray length  
            }
            else{

                pd=a[j]-a[j-1]; //the previous diffence equals to the current difference for checking in
                //continuation
                
                curr=2;//Becz our stream breaks so update the current length by again 2;
            }

            ans=max(ans,curr); 
        }    
        cout<<ans<<endl;
    }

    return 0;
}