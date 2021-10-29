#include<bits/stdc++.h>

using namespace std;

/*

n=5
0.5 1.5 4.5 13.5 40.5
0.5
1.5 - 0.5+3^0 
4.5 - 1.5+3^1
13.5 - 4.5+3^2
40.5 - 13.5+3^3 
*/

int main(){
    int n;
    cin>>n;
    double r=0.5;
    
    
    for(int i=0;i<n;i++){
        
        if(i==0){
            cout<<r<<" ";
            continue;
        }
        else{
        double t=pow(3,i-1);
        double x=t+r;
        r=x;
        cout<<x<<" ";
        }
    }
    
    
    return 0;
}