#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(n^2)
void selectionsort(int arr[],int n){
	
	
	for(int i=0;i<=n-2;i++){
		int curr=arr[i];
		int min_pos=i;

		//Finding out the minimum element
		for(int j=i;j<n;j++){
			if(arr[j]<arr[min_pos]){
				min_pos=j;
			}
		}

		//swap outside the loop
		swap(curr,arr[min_pos]);
	}


}

int main(){

int arr[]={-2,3,4,-1,5,-12,6,1,3};
int n=9;
selectionsort(arr,n);

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}

	return 0;
}