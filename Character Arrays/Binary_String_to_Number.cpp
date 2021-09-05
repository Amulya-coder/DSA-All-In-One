#include <bits/stdc++.h>
using namespace std;
 
int binaryToDecimal(string s)
{
    // your code goes here

    int num=stoi(s);
    int dec_value=0;

    int base=1;
    int temp=num;

    while(temp){
    int last_digit=temp%10;
    temp=temp/10;

    dec_value+=last_digit*base;
    base=base*2;

    }
    return dec_value;

}

int main(){

string s="10101001";
cout<<binaryToDecimal(s)<<endl;

}