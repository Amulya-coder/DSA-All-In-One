#include<bits/stdc++.h>

using namespace std;

int main(){

    string str="adnaafjsjkda";

    //convert into Uppercase
    for(int i=0;i<str.size();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]-=32;
        }  
    }
    cout<<str<<endl;

    string str2="adkadFGJGFkssdf";
    //convert into lowercase
    for(int i=0;i<str2.size();i++){
        if(str2[i]>='A' && str2[i]<='Z'){
            str2[i]+=32;
        }
    }
    cout<<str2<<endl;

    //InBuilt Function
    string s="ewndjcnwekja";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;

    string s2="ADANOICSDNIS";
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    cout<<s2<<endl;

    return 0;
}