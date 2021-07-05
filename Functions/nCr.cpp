#include<bits/stdc++.h>

using namespace std;

int fact(int n){

int factorial=1;

for(int i=n;i>0;i--){
    factorial *= i;

}

return factorial;
}

int main(){

int n,r;
cin>>n>>r;

int ans=fact(n)/(fact(r)*fact(n-r));

cout<<ans<<endl;

}