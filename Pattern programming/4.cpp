#include<bits/stdc++.h>

using namespace std;

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

int main(){

	int n=5;

	for(int i=1;i<=n;i++){
		for(int j=i;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}


	return 0;
}