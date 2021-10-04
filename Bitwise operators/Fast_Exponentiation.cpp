#include<bits/stdc++.h>

using namespace std;

int fastexponentiation(int a,int n){
	int result=1;

	while(n>0){
		//for finding last_bit is 1 or not
		int last_bit=(n&1);
		if(last_bit){
			result=result*a;
		}
		a=a*a;
		//for removing the bit from last
		n=n>>1;
	}
	return result;
}


int main(){

int a=3,n=5;

cout<<fastexponentiation(a,n);


	return 0;
}