//Find all the Permutations of the string


#include<bits/stdc++.h>

using namespace std;

class Solution
{
	public:
	vector<string> res;
	vector<string> permute(string s,int l,int r){
            
            if(l==r){
                res.push_back(s);
                return res;
            }
            for(int j=l;j<r;j++){
                
                swap(s[l],s[j]);
                permute(s,l+1,r);
                swap(s[l],s[j]);

                // char ch=s[i];
                // string ros=s.substr(0,i)+s.substr(i+1);
                // permute(ros,i,ans);
            }
            
            return res;
        }
		vector<string>find_permutation(string S)
		{
		    // Code here there         
            vector <string> str=permute(S,0,S.length());
            sort(str.begin(),str.end());
		    
		    return str;    
		}
		
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}