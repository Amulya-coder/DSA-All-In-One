//Given an array nums of distinct integers, print all the possible permutations.

#include<bits/stdc++.h>

using namespace std;


void swap(int arr[],int i,int j){

	int temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void permutation(int arr[],int cid,int n){

if(cid==n-1){
	printArray(arr,n);
	return;
}

else{
	for(int i=cid;i<n;i++){

		//For current index element we will try out the all possible
		//swaps
		//we are swapping elements at position i with elements at cuurent index
		swap(arr,i,cid);
		
		/*1 2 3
		  ^ ^ swap ->2 1 3
		if we not swap it agin then it will end up with swap 
		1 and 3
		*/

		//recusive call for next index element
		permutation(arr,cid+1,n);

		//Again swap
		swap(arr,i,cid);


	}
}

}


int main(){

int arr[]={1,2,3};
int n=3;
permutation(arr,0,3);

 return 0;
}



