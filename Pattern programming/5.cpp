#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

/*
A
B B
C C C
D D D D
E E E E E


int main(){

	int n=5;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",i+64);
		}
		cout<<endl;
	}


	return 0;
}
*/

/*
a 
a b 
a b c
a b c d
a b c d e
*/

int main(){

	int n=5;

	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			printf("%c ",j+96);
		}
		cout<<endl;
	}

	return 0;
}