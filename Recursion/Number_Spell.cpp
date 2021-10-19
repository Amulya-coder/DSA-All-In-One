#include<bits/stdc++.h>

using namespace std;

string spell[]={"zero","one","two","three","four","five","six","seven","eight","nine"};


void printspell(int n){
	if(n==0){
		return;
	}

		int lastdigit=n%10;
		printspell(n/10);
		cout<<spell[lastdigit]<<" ";
	
}

int main(){

int n=384934;

printspell(n);
}