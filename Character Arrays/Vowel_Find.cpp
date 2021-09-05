#include <bits/stdc++.h>
using namespace std;

/*
Input
S="aeoibsddaeioudb"
Output
"aeoiaeiou"
*/

//Finding the particular character is a vowel or not
bool isVowel(char ch){
	ch=toupper(ch);
	return (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U');
		
}


string vowel(string S){
  // your code goes here
  
int n=S.length();
string output;
for(int i=0;i<n;i++){
	if(isVowel(S[i])){
		output+=S[i];
	}
}

return output;
} 

int  main(){
	string s1="aeoibsddaeioudb";
                           
    //a b s d e f

    cout<<vowel(s1)<<endl;

	return 0;
}