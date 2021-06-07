#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int start,int end){

//set the partition index at the start of the list
int pindex=start;
int pivot=arr[end];

for(int i=start;i<end;i++){


//if element is lesser than pivot then we swap the element with element on partition index and increase the partition index.
if(arr[i]<=pivot){
	swap(arr[i],arr[pindex]);
	pindex+=1;
}


}

//swap pivot element with partion index element
swap(arr[pindex],arr[end]);
return pindex;

}

void quickSort(int arr[],int start,int high){

if(start<high){
int pindex=partition(arr,start,high);

//recursively call the quick sort to the left segment of the pivot elements which are lesser than pivot.
quickSort(arr,start,pindex-1);

//recursively call the quick sort to the right segment of the pivot towards the higher index values.
quickSort(arr,pindex+1,high);
}

}

void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


int main(){

int arr[]={12,1,23,45,32,58};
int n=6;
quickSort(arr,0,5);
display(arr,n);

	return 0;
}