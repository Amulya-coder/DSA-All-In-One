#include<bits/stdc++.h>

using namespace std;

string removeduplicate(string s){

if(s.length()==0){
    return " ";
}

char c=s[0];

string ans=removeduplicate(s.substr(1));

if(c==ans[0]){
    return ans;
}

return c+ans;
}



int main(){


    cout<<removeduplicate("aaaabbbccdd");

    return 0;
}