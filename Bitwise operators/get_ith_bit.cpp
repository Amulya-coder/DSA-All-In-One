#include<bits/stdc++.h>

using namespace std;

int getIthbit(int n,int i){

	int mask=1<<i;
	return (n & mask)>0?1:0;
}

int main(){

	cout<<getIthbit(5,1);
	return 0;
}