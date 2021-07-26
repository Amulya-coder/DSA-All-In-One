#include<bits/stdc++.h>

using namespace std;

int main(){

    string s="dajsdamckbdcadd";
    int mxF=0,count=0;
    for(int i=0;i<(s.size()-1);i++){
        for(int j=0;j<s.size();j++){
            if(s[j]==s[i]){
                count++;
            }
        }
         mxF=max(count,mxF);
         count=0;
    }
   
    cout<<mxF<<endl;

    return 0;
}