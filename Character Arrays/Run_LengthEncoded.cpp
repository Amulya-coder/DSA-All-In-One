/*
Input1:"aaabbbccccd"
Ouput1:"a3b4c4d1" 

Input2:"abcd"
output2:"abcd"
*/

#include<bits/stdc++.h>

using namespace std;


string compressString(string s){

int n=s.length();

string output;

//Time Complexity O(n)
for(int i=0;i<n;i++){
	int count=1;
	while(i<n-1 and s[i]==s[i+1]){
		count++;
		i++;
	}
	output+=s[i];
	output+=to_string(count);
}

if(output.length()>s.length())
return s;

else
return output;

}

int main(){

	string s1="aabbsddeeefff";
	cout<<compressString(s1)<<endl;

	string s2="abcd";
	cout<<compressString(s2)<<endl;

	return 0;
}