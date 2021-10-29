#include<bits/stdc++.h>

using namespace std;

/*
n=6
9 11 20 31 51 82
*/

int main(){
    
    int n;
    cin>>n;
    
    int first=9,second=11,val;
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<first<<" ";
        }
        else if(i==2){
            cout<<second<<" ";
        }
        else{
            val=first+second;
            cout<<val<<" ";
            first=second;
            second=val;
        }
        
        
    }
    
    return 0;
}
