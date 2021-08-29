/*
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should 
be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses 
to "a2b2c3".

Input: chars = ["a"]
Output: Return 1, and the first character of the input array should 
be: ["a"]
Explanation: The only group is "a", which remains uncompressed 
since it's a single character.

Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should 
be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". 
This compresses to "ab12".

*/

#include<bits/stdc++.h>

using namespace std;

int compress(vector<char>& chars){

string str;

for(int i=0;i<chars.size();i++){

	int count=1;	
	while(i<chars.size()-1 && chars[i]==chars[i+1]){
		count++;
		i++;

	}
	if(count==1){
		str+=chars[i];
	}
	else{
		str+=chars[i];
		str+=to_string(count);
	}


}


return str.size();

}

int main(){

vector<char> input({'a','b','b','b','b','b','b','b','b','b','b','b','b'});

cout<<compress(input);

return 0;
}