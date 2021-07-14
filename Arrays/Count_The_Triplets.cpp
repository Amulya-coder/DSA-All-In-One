#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int count=0;
    for(int i=n-1;i>=2;i--){
        int j=0;
        int k=i-1;
        while(j<k){
            if(a[j]+a[k]==a[i]){
                count++;
                j++;
                k--;    
            }
            
             else if(a[j]+a[k]<a[i]){
                j++;
            }
            else{
                k--;
            }
        }
       

    }
    cout<<count<<endl;

    return 0;
}