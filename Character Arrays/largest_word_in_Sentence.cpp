#include<bits/stdc++.h>

using namespace std;

//Find the largest word in a sentence
int main(){

int n;
cin>>n;
cin.ignore();

char c[n+1];
cin.getline(c,n);
cin.ignore();

//Length is a parameter

int currlen=0;
int maxlen=0;
int i=0;
while(1){

if(c[i]==' ' || c[i]=='\0'){
	if(currlen>maxlen)
		maxlen=currlen;

	currlen=0;
}
else
currlen++;

if(c[i]=='\0'){
	break;
}
i++;
}

cout<<maxlen<<endl;

return 0;
}