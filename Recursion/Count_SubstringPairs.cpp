#include<bits/stdc++.h>

using namespace std;

int countpairSubstring(string s){

int n=s.length();
return n*(n+1)/2;


}


int main(){

cout<<countpairSubstring("abc")<<endl;

}