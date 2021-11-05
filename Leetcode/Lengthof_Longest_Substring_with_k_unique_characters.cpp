#include<bits/stdc++.h>

using namespace std;

//Time Complexity is O(n)
//function for finding the length of longest substring with k non repeating characters
int longestSubstring(string s,int k){

map<char,int> m;
m.clear();
int cnt=0; //Unique characters in sliding window
int n=s.length();
int ans=INT_MIN;
int i=0;
int j=0;

if(n==0){
	return 0;
}

else{
while(j<n){

	m[s[j]]++;
	if(m[s[j]]==1)
		cnt++;	//unique characters count 

	if(cnt<k){
		j++;
	}
	else if(cnt==k){
		ans=max(ans,j-i+1);
		j++;
	}

	//condition if cnt i.e unique characters is greater than k then we can start decreamenting the
	// window size from left (i) if cnt of a character becomes 0 then we can remove it from the map
	//i.e that particular unique character which we will be maintaining in cnt variable will not be 
	//considered as unique 
	else if(cnt>k){
		while(cnt>k and i<=j){
			m[s[i]]--;
			if(m[s[i]]==0){
				// m.erase(s[i]);
                cnt--;
			}
			i++;
		}
		j++;
	}
	
}
}
return ans;
}

int main(){

string s = "aabacbebebe";
cout<<longestSubstring(s,3); //cbebebe

	return 0;
}