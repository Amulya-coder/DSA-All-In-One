#include<bits/stdc++.h>

using namespace std;

//Time Complexity = O(n logn);


void merge(int arr[],int l,int mid,int r){

int n1=mid-l+1;
int n2=r-mid;

int a[n1];
int b[n2];//temp arrays

for(int i=0;i<n1;i++){

a[i]=arr[l+i];

}

for(int j=0;j<n2;j++){
	b[j]=arr[mid+1+j];
}

int i=0;
int j=0;

int k=l;

while(i<n1 && j<n2){

if(a[i]<b[j]){
	arr[k]=a[i];
	i++;
	k++;
}
else{
	arr[k]=b[j];
	k++;
	j++;
}


}

while(i<n1){
	arr[k]=a[i];
	k++;
	i++;
}

while(j<n2){
	arr[k]=b[j];
	k++;
	j++;
}

}

void mergeSort(int arr[],int l,int r){

if(l<r){

//Finding the middle element
int mid=(l+r)/2;

//Now solving the on left and right part by Recursively call the mergeSort 
mergeSort(arr,l,mid);
mergeSort(arr,mid+1,r);

//Merging the two sorted arrays to finally get the resultant sorted array
merge(arr,l,mid,r);

}

}


int main(){

int arr[]={1,3,5,7,6};

mergeSort(arr,0,5);
for(int i=0;i<5;i++){
	cout<<arr[i]<<" ";
}cout<<endl;

}