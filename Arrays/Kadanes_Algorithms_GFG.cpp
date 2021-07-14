#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currsum=a[0];
    int maxSum=a[0];
    for(int i=1;i<n;i++){
        
        
        currsum=max(a[i],currsum+a[i]);
        
        
        maxSum=max(currsum,maxSum);
      

        }   

        cout<<maxSum<<endl;
    }


