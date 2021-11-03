#include<bits/stdc++.h>

using namespace std;

//Time complexity O(n)
//Avg complexity O(nlogn)
int partition(vector<int> &arr,int s, int e){

int pivot=arr[e];
int i=s-1;

for(int j=s;j<e;j++){
	if(arr[j]<pivot){
		i++;
		swap(arr[i],arr[j]);
	}
}

//Put the pivot at its correct position
swap(arr[i+1],arr[e]);

return i+1;
}


void quickSort(vector <int> &arr,int s,int e){

//BASE CASE
if(s>=e){
	return;
}

//REC CASE
int p=partition(arr,s,e);

//perform the sorting on the left lesser elements than the pivot
quickSort(arr,s,p-1);

//and perform the sorting on the right greater elements than pivot
quickSort(arr,p+1,e);

}


int main(){

	vector<int> arr={10,5,2,0,7,6,4};

	int n=arr.size()-1;

	quickSort(arr,0,n);

	for(int i=0;i<=n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}