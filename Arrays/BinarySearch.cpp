#include<bits/stdc++.h>

using namespace std;


int BinarySearch(int arr[],int n,int key){

int low=0;
int high=n-1;
int mid;

while(low<=high){

 mid=(low+high)/2;

if(arr[mid]==key){

return mid;
}

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

	int element=10;
	cout<<BinarySearch(arr,n,element);

	return 0;
}