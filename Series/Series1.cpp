#include<bits/stdc++.h>

using namespace std;

// n=7
// 1 2 3 6 9 18 27
int main(){

	int n,first=1,second=2,c;
	cin>>n;

	for(int i=1;i<=n;i++){


		if(i==1){
			cout<<first<<" ";
		}
		else if(i==2){
			cout<<second<<" ";
		}
		else{
			if(i%2==1){
				c=first+second;
				cout<<c<<" ";
				first=second;
				second=c;
			}
			else{
				c=2*second;
				cout<<c<<" ";
				first=second;
				second=c;
			}
		}
	}



	return 0;
}