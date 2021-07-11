#include<bits/stdc++.h>


using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;
    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
            cout<<i<<" "<<j<<endl;    
            flag=true;
            break;
            }
        }
    }

    if(flag){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    return 0;
}