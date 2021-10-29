#include<bits/stdc++.h>

using namespace std;

/*
n=5
2 3 8 63 3968
*/


int main(){
    
    int n;
    cin>>n;
    
    int val=2;
    for(int i=1;i<=n;i++){
        cout<<val<<" ";
        val=(val*val)-1;
        
    }
    
    return 0;
}