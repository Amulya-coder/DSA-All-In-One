#include<bits/stdc++.h>

using namespace std;

void Subsets(string ip, string op){

	if(ip.length()==0){
		cout<<op<<endl;

		return;
	}

	string op1=op;
	string op2=op;

	op2.push_back(ip[0]);
	ip.erase(ip.begin()+0);

	Subsets(ip,op1);
	Subsets(ip,op2);
}

int main(){

	string ip="abc";

	string op=" ";

	Subsets(ip,op);
	return 0;
}