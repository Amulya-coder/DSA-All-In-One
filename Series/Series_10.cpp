#include<bits/stdc++.h>

using namespace std;

/*
n=4
121 225 361 529
11^2 15^2 19^2 23^2
*/

int main(){
    int n;
    cin>>n;
    
    int temp=11,diff=4,val;
    for(int i=1;i<=n;i++){
        val=temp*temp;
        cout<<val<<" ";
        temp+=diff;
    }

}