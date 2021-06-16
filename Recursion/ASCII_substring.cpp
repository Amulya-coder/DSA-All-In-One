#include<bits/stdc++.h>

using namespace std;

void asciisubstring(string s,string ans){

if(s.length()==0){
    cout<<ans<<endl;
    return;
}


char c=s[0];

string ros=s.substr(1);

int code=c;

asciisubstring(ros,ans);
asciisubstring(ros,ans+c);
asciisubstring(ros,ans+to_string(code));


}

int main(){

asciisubstring("AB","");


    return 0;
}


