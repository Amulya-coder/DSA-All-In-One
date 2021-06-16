//Print all the words combination from the digits 

#include<bits/stdc++.h>

using namespace std;

string keypadArr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};


//Main logic
void stringpair(string s,string ans){

if(s.length()==0){
    cout<<ans<<endl;
    return;
}

//Take out the first character of the string
char c=s[0];

//Finding out the index in the KeypadArr which will give the word present on that index
string code=keypadArr[c-'0'];
string ros=s.substr(1);

for(int i=0;i<code.length();i++){
    stringpair(ros,ans+ code[i]);
}


}



int main(){

    stringpair("23","");


    return 0;
}









