#include<bits/stdc++.h>

using namespace std;

void DecimalToBinary(int n){
  int bindecimal[32];

  int i=0;
  while(n>0){
    bindecimal[i]=n%2;
    n=n/2;
    i++;
    }  

    for(int j=i-1;j>=0;j--){
        cout<<bindecimal[j];
    }

  }


int main(){

    int n;
    cin>>n;

    DecimalToBinary(n);
    return 0;
}