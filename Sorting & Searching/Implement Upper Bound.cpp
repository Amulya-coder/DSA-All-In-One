#include<bits/stdc++.h>

using namespace std;

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.	

	int low=0;
	int high=n-1;

	int curr_greater=n;

	if(arr[low]>=x){
		return low;
	}

	while(low<=high){
		int mid=(low+high)/2;

		if(arr[mid]>x){
			curr_greater=mid;
			high=mid-1;
		}
		else if(arr[mid]<=x){
			low=mid+1;
		}
	
	}
	return curr_greater;
}