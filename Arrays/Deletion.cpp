#include<bits/stdc++.h>

using namespace std;

//Insertion in Array
int indexDeletion(int arr[],int size,int capacity,int ind){

for(int i=ind;i<=size-1;i++){

//Shifting the element by one index
arr[i]=arr[i+1];

}
return 1;
}
 


//Traversal
void display(int arr[],int n){

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;

}


int main(){

	int arr[16]={4,6,12,9,15,18};
	int n=6;


	int index;
	cin>>index;

	indexDeletion(arr,n,16,index);
	n--;
	display(arr,n);
	
	

	return 0;
}