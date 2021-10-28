#include<bits/stdc++.h>

using namespace std;

// n=5
// 4 5 9 18 34

int main(){

	int n;
	cin>>n;

	int val=4;


	for(int i=1;i<=n;i++){
		cout<<val<<" ";
		val=val+(i*i); 		
			
	}

	return 0;
}