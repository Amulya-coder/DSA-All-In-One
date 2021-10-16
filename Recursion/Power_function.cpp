#include<bits/stdc++.h>

using namespace std;


//Time complexity is O(n) and Space compl is O(n)
int power(int a,int n){

	//base case
	if(n==0){
		return 1;
	}

	return a*power(a,n-1);
}

//Optimised
//T.Complexity O(logn)
int fastpower(int a,int n){

	//base case
	if(n==0){
		return 1;
	}

	int subprob=fastpower(a,n/2);
	int subprobsq=subprob*subprob;
	if(n&1){
		return a*subprobsq;
	}
	else{
		return subprobsq;
	}
}
int main(){

	int a=2;
	int p=10;

	cout<<fastpower(a,p);
	return 0;
}