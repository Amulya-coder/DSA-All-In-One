#include<bits/stdc++.h>

using namespace std;

void decimalToOctal(int n){
  int bindecimal[32];

  int i=0;
  while(n>0){
    //for getting remainder by using % modulo
    bindecimal[i]=n%8;

    //for the new number we divide by 8 /
    n=n/8;
    i++;
    }  

    //printing in reverse order
    for(int j=i-1;j>=0;j--){
        cout<<bindecimal[j];
    }

  }


int main(){

    int n;
    cin>>n;

    decimalToOctal(n);
    return 0;
}