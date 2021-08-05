/*
Given a String S, reverse the string without reversing its individual
words. Words are separated by dots.

Input 1:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
*/
#include<bits/stdc++.h>

using namespace std;

int main(){

	string s;
	getline(cin,s);

	vector<string>temp;
	string str="";

	for(int i=0;i<s.length();i++){
		if(s[i]=='.'){
			temp.push_back(str);
			str="";

		}
		else
			str+=s[i];
	}


	temp.push_back(str);
	reverse(temp.begin(),temp.end());
	int i;
	for(i=0;i<temp.size()-1;i++){
		cout<<temp[i]<<".";

	}cout<<temp[i];




	return 0;
}