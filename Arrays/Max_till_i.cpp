#include<bits/stdc++.h>


using namespace std;

int main(){

    int mx=-1999999;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        mx=max(a[i],mx);
        cout<<mx<<endl;
    }

    return 0;
}