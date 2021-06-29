#include<bits/stdc++.h>

using namespace std;


int recursiveBinarySearch(int arr[],int low,int high,int key){

while(low<=high){

int mid=(low+high)/2;

if(arr[mid]==key){
	return mid;
}

else if(arr[mid]<key){

return recursiveBinarySearch(arr,low,mid-1,key);

}

else{
	return recursiveBinarySearch(arr,mid+1,high,key);
}

}

return -1;

}


int BinarySearch(int arr[],int n,int key){

int low=0;
int high=n-1;
int mid;

while(low<=high){

 mid=(low+high)/2;

if(arr[mid]==key){

return mid;
}

//If element is smaller than mid then it can only be present in left subarray
else if(arr[mid]<key){
	low=mid+1;

}

else if(arr[mid]>key){
	high=mid-1;
}



}

return -1;
}


int main(){

int arr[]={4,8,10,12,15};
	int n=5;

	int element=15;
	// cout<<BinarySearch(arr,n,element);
	cout<<recursiveBinarySearch(arr,0,n-1,element);

	return 0;
}