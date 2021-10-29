#include<bits/stdc++.h>

using namespace std;

// n=6
// 0 2 8 14 24 34

int main(){
    
    int n;
    cin>>n;
    
    int val=0,diff=2,count=0;
    for(int i=0;i<n;i++){
        
        if(i==0)
        cout<<val<<" ";
        
        else{
        val+=diff;
        cout<<val<<" ";
        }
        count++;
        if(count%2==0){
            diff+=4;
        }
    }
    
    
    return 0;
}