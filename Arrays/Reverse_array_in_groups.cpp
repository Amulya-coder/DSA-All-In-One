//Given an array arr[] of positive integers of size N.
// Reverse every sub-array group of size K.

/*
Input:
N = 5, K = 3
arr[] = {1,2,3,4,5}
Output: 3 2 1 5 4
Explanation: First group consists of elements
1, 2, 3. Second group consists of 4,5.
*/

#include<bits/stdc++.h>

using namespace std;


int main(){

int n;
cin>>n;

int k;
cin>>k;

int arr[n];

for(int i=0;i<n;i++){
	cin>>arr[i];
}


//O(n)	
for(int i=0;i<n;i+=k){
int left=i;
int right=min(i+k-1,n-1);

while(left<right){
	swap(arr[left++],arr[right--]);
}

}


for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}cout<<endl;



	return 0;
}