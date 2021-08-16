#include<bits/stdc++.h>

using namespace std;

void counting_sort(int arr[],int n){
	//find out the largest element
	int largest=-1;
	for(int i=0;i<n;i++){
		largest=max(largest,arr[i]);
	}

	//creating the dynamic array
	vector<int> freq(largest+1,0);

	//Updating the freq array
	for(int i=0;i<=largest;i++){
		freq[arr[i]]++;
	}

	//Put the elements from freq into original array
	int j=0;
	for(int i=0;i<=largest;i++){
		while(freq[i]>0){
			//copying that element into original array
			arr[j]=i;
			freq[i]--;
			j++;

		}
	}
	return;
}


int main(){

	int arr[]={88,97,10,12,15,1,5,6,12,5,8};
	int n=sizeof(arr)/sizeof(int);
	counting_sort(arr,n);

	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

}