#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[],int n){
	if(n==1 or n==0){
		return true;
	}

								 //changing the address of the array
	if(arr[0]<arr[1] and isSorted(arr+1,n-1)){
		return true;
	}

	return false;
}

bool isSortedTwo(int arr[],int i,int n){
	//base condition
	if(i==n-1){
		return true;
	}

	if(arr[i]<arr[i+1] and isSortedTwo(arr,i+1,n)){
		return true;
	}

	return false;
}


int main(){

	int arr[]={1,2,5,7,8};

	int n=sizeof(arr)/sizeof(arr[0]);
	// cout<<isSorted(arr,n);
	cout<<isSortedTwo(arr,0,n);
	return 0;
}