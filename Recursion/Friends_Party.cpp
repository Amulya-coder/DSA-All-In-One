#include<bits/stdc++.h>

using namespace std;

int friendsPairing(int n){
	if(n==1){
		return 1;
	}

	if(n==2){
		return 2;
	}

	return friendsPairing(n-1) + (n-2)*friendsPairing(n-1);
	
}


int main(){
cout<<friendsPairing(3);

	return 0;
}