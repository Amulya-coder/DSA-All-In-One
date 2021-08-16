/*
1. sort
2. comparator
3. Reverse
4. Greater
*/

#include<bits/stdc++.h>

using namespace std;

bool compare(int a,int b){
	return a<b;
}


int main(){

int arr[]={10,9,8,6,5,4,3,2,11,16,8};

int n=sizeof(arr)/sizeof(int);

// sort(arr,arr+n);	

//We are passing the function as a parameter inside another function known as comparator
//Remember here we are not calling the function compare we are passing it as a parameter

sort(arr,arr+n,compare);
for(int x:arr){
	cout<<x<<" ";
}


	return 0;
}