#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n){

    int ans=0;
    int x=1;

    while(n>0){

        int temp=n%10;
        ans+=x*temp;
        x=x*2;
        n=n/10;
    }

    return ans;

}

int main(){

    int n;
    cin>>n;

    cout<<binaryToDecimal(n)<<endl;


    return 0;
}