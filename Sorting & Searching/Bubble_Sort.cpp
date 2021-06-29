#include<bits/stdc++.h>

using namespace std;


void BubbleSort(int arr[],int n){

for(int i=0;i<n;i++){
	bool flag=0;
	for(int j=0;j<n-1;j++){
		
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
			flag=1;
		}

	}
	if(flag==0){
			break;
	}
}


}

void display(int arr[],int n){

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

cout<<endl;
}

int main(){

int arr[]={4,8,2,1,10};
int n=5;

BubbleSort(arr,n);
display(arr,n);

	return 0;
}