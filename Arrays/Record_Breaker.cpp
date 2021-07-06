#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }


    int mx=INT32_MIN;
    int ans=0;

    if(n==1){
        cout<<"1"<<endl;
    }
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx=max(a[i],mx);
    }
    cout<<ans<<endl;
    return 0;
}