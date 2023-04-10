#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        
        int i=0;
        int j=1;
        bool flag=true;
        
        if(s.length()==1){
            return false;
        }
        
        if(s.length()==2){
            if(s[i]=='(' and s[j]==')'){
                return true;
            }
            else if(s[i]=='[' and s[j]==']'){
                return true;
            }
            else if(s[i]=='{' and s[j]=='}'){
                return true;
            }
            else{
                return false;
            }
        }
        while(i<s.length() and j<s.length()){
            if(s[i]=='(' and s[j]==')'){
                i+=2;
                j+=2;
            }
            else if(s[i]=='[' and s[j]==']'){
                i+=2;
                j+=2;
            }
            
            else if(s[i]=='{' and s[j]=='}'){
                i+=2;
                j+=2;
            }
            else{
                flag=false;
                break;
            }
        }
        
        return flag;
    }
};