#include<bits/stdc++.h>

using namespace std;

/*
n=5
95 115.5 138 162.5 189
*/

int main(){
    
    int n;
    cin>>n;
    
    double temp=95; 
    double diff=20.5;
     
    for(int i=1;i<=n;i++){
        
        cout<<temp<<" ";
        temp=temp+diff;
        diff+=2;
    }    
    
    return 0;
}
