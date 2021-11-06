#include<bits/stdc++.h>

using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void fillArray(int arr[],int i,int n,int val){

	//base case
	if(i==n){
		//print the array
		printArray(arr,n);
		return;
	}

	//Rec case
	arr[i]=val;
	fillArray(arr,i+1,n,val+1);
	arr[i]=-1*arr[i];

}


int main(){

	int arr[100]={0};

	int n=5;

	fillArray(arr,0,n,1);
	printArray(arr,n);
	return 0;
}