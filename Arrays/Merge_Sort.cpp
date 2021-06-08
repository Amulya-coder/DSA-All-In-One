#include<bits/stdc++.h>

using namespace std;


//Merge function is not only to merge 2 array but also to sort sub arrays
void merge(int arr[],int l,int mid,int r){

int n1=mid-l+1;
int n2=r-mid;

int left[n1];
int right[n2];


for(int i=0;i<n1;i++){

left[i]=arr[l+i];

}

for(int j=0;j<n2;j++){

right[j]=arr[mid+1+j];

}

//Initial index if the first two subarray
int i=0,j=0;

//Initial index of the merged subarray
int k=l;

while(i<n1 && j<n2){

if(left[i]<=right[j]){

arr[k]=left[i];
i++;

}

else{
	arr[k]=right[j];
	j++;
}

k++;

}

while(i<n2){
	arr[k]=left[i];
	i++;
	k++;
}

while(j<n2){
	arr[k]=right[j];
	j++;
	k++;
}

}

void mergeSort(int arr[],int l,int r){

int mid=(l+r)/2;

if(l<r){

mergeSort(arr,l,mid);
mergeSort(arr,mid+1,r);
merge(arr,l,mid,r);
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
cout<<"Unsorted Array"<<endl;
display(arr,6);
mergeSort(arr,0,6);
cout<<"Sorted Array"<<endl;
display(arr,6);

	return 0;
}