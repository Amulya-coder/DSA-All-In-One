#include<bits/stdc++.h>

using namespace std;

int findBitsConvert(int a,int b){
	//first apply a Xor b
	int n=a^b;
	int count=0;

	while(n){
		//Imp. n&(n-1) is used to count how many set bits are there in number
		n=n&(n-1);
		count++;
	}

	return count;
}

int main(){

	int a,b;
	cin>>a>>b;


	cout<<findBitsConvert(a,b);
	return 0;
}