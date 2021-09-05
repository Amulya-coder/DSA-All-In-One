#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s){
    // your code goes here

    sort(s.begin(),s.end());
    string output;
    int n=s.length();
    
    //Time Complexity O(n)
    for(int i=0;i<n;i++){
        while(i<n-1 and s[i]==s[i+1]){
            i++;
        }
        output+=s[i];
    }
    
    return output;
}


int main(){

    string s1="aabbsddeeefff";
                           
    //a b s d e f

    cout<<removeDuplicate(s1)<<endl;
    return 0;
}