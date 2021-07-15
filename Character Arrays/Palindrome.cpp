#include<bits/stdc++.h>

using namespace std;

//check Palidrome
int main(){

int n;
cin>>n;

char c[n+1];
cin>>c;

bool flag=1;

for(int i=0;i<n;i++){
	if(c[i]!=c[n-1-i]){
		flag=0;
		break;
	}
}

if(flag)
cout<<"Palidrome"<<endl;
else
cout<<"Not Palindrome"<<endl;

 return 0;
}