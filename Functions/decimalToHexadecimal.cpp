#include <bits/stdc++.h>

using namespace std;

void decimaltohex(int n)
{
    char hexdecimal[100];

    int i=0;

    while(n!=0){
        int temp=0;
        
        temp=n%16;

        if(temp<10){
            hexdecimal[i]=temp+48;
            i++;
        }
        else{
            hexdecimal[i]=temp+55;
            i++;
        }

        n=n/16;
    }

    for(int j=n-1;j>=0;j--){
        cout<<hexdecimal[j];
    }
}

int main()
{

    int n;
    cin >> n;

    decimaltohex(n);

    return 0;
}