#include<bits/stdc++.h>

using namespace std;


int main(){

	int a[]={2,3,4,1,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	
	//Finding the missing number
	int sum=0;
	int m=n+1;

	int actualsum=(m*(m+1)/2);

	for(int i=0;i<n;i++){
		sum+=a[i];
		
	}
	// cout<<sum<<endl;
	cout<<(actualsum-sum)<<endl;

	
}