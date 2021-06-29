#include<bits/stdc++.h>

using namespace std;

//Insertion in Array
int indexInsertion(int arr[],int size,int capacity,int element,int k){

if(size>=capacity){
	return 0;
}

for(int i=size-1;i>=k;i--){

//Shifting the element by one index
arr[i+1]=arr[i];

}

arr[k]=element;

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

	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }

	int element=54,index;
	cin>>index;

	if(indexInsertion(arr,n,16,element,index)){
		n++;
		display(arr,n);
	}
	else{
		cout<<"Insertion is not possible"<<endl;
	}

	return 0;
}