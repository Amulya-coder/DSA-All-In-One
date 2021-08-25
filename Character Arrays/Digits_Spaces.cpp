//Question
//Find the total number of alphabets, digits, and spaces from the sentence

#include<bits/stdc++.h>

using namespace std;


int main(){

	char ch=cin.get();

	int alpha=0;
	int digits=0;
	int space=0;

	while(ch!='\n'){
		if(ch>='0' and ch<='9'){
			digits++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alpha++;
		}
		else if(ch==' ' or ch=='\t'){
			space++;
		}

		ch=cin.get();
	}

	cout<<"Total Digits "<<digits<<endl;

	cout<<"Total Alphabets "<<alpha<<endl;

	cout<<"Total Spaces "<<space<<endl;
	return 0;
}