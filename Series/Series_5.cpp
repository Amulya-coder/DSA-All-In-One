#include<bits/stdc++.h>

using namespace std;

// n =6
// 6 11 21 36 56 81
int main(){
    
    int n;
    cin>>n;
    
    int val=6;
    
    for(int i=1;i<=n;i++){
        cout<<val<<" ";
        val=val+(5*i);
    }
    
    
    return 0;
}
