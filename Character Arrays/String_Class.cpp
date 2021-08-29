#include<bits/stdc++.h>

using namespace std;


//By default it's assuming that string terminate at a new line
int main(){

string s;
// getline(cin,s,'.');
// cout<<s<<endl;

int n=5;
vector<string> sarr;

string temp;
while(n--){
	getline(cin,temp);
	sarr.push_back(temp);
}

	for(string x:sarr){
	cout<<x<<","<<endl;
}

}