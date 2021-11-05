#include<bits/stdc++.h>

using namespace std;
//we have to return the length of the longest substring

//This function return true if all the characters in str[i..j] having distinct characters

/*
bool areDuplicate(string s,int i,int j){

	vector<bool> v(26);

	for(int k=i;k<=j;k++){
		if((v[s[k]-'a'])==true)
			return false;

		v[s[k]-'a']=true;
	}

	return true;
}

// returns the length of the longest substring of distinct characters
int longestSubstring(string s){

int res=0;
int n=s.size();

for(int i=0;i<n;i++){
	for(int j=i;j<n;j++){
		if(areDuplicate(s,i,j)){
			//Initially the res may hold the single string then we can find the max
			res=max(res,j-i+1);
		}
	}
}

return res;

}
*/

//Better O(n^2)
/*
int longestSubstring(string s,int i,int j){


	int res=0;
	int n=s.size();
	for(int i=0;i<n;i++){

		vector<bool> v(256);

		for(int j=i;j<n;j++){


			if(v[s[j]]==true){
				break;
			}

			else{
				res=max(res,j-i+1);
				v[s[j]]=true;
			}
		}
		v[s[i]]=false;
	}

	return res;
}
*/

//Optimised O(n)
int longestSubstring(string s ,int n){
	map<char,int> m;
	int j=0;
	int i=0;
	int ans=INT_MIN;
	int cnt=0;

	if(n==0){
		return 0;
	}
	else{
	while(j<n){
		m[s[j]]++;
		if(m[s[j]]==1)
			cnt++;

		if(cnt<(j-i+1)){
		while(cnt<(j-i+1) and i<=j){
			m[s[i]]--;

			if(m[s[i]]==0)
				cnt--;
			i++;
		}
			j++;
		}

		else if(cnt==(j-i+1)){
			ans=max(ans,cnt);

			j++;
		}

	}
}
	return ans;
}
int main(){


// string s = "abcabcbb";
string s;
cin>>s;
int n=s.length();
cout<<longestSubstring(s,n);

	return 0;
}