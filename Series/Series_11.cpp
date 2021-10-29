#include<bits/stdc++.h>

using namespace std;

/*
n=6
1 2 3 6 9 18
1
2
3 odd - 1+2
6 even - 3*2
9 odd - 3+6
18 even - 9*2

*/

int main(){
    
    int n;
    cin>>n;
    
    int first=1, second=2, val;
    
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<first<<" ";
        }
        else if(i==2){
            cout<<second<<" ";
        }
        else{
            if(i%2==1){
            val=first+second;
            cout<<val<<" ";
            first=second;
            second=val;
            }
            else{
                val=2*second;
                cout<<val<<" ";
                first=second;
                second=val;
            }
        }
    }
    
    return 0;
}