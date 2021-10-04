#include<bits/stdc++.h>

using namespace std;

int eulerphi(int n){
    float result=n;

    //if p is a prime factor
    
    for(int p=2;p*p<=n;p++){
    if((n%p)==0){
        while(n%p==0){
            n=n/p;
            result=result*(1.0-(1.0/(float) p));
        }
    }
    }

    //If n has a prime factor greater than sqrt of n
    //then there is at most one prime factor
    if(n>1){
        result=result*(1.0-(1.0/n));
    }
    return result;
}

int main(){
    int n=6;

    cout<<eulerphi(n);
    return 0;
}