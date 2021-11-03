#include<bits/stdc++.h>

using namespace std;

void merge(vector<int> &arr,int s,int e){

int i=s;
int m=(s+e)/2;
int j=m+1;

vector<int> temp;

while(i<=m and j<=e){
	if(arr[i]<arr[j]){
		temp.push_back(arr[i]);
		i++;
	}

	else{
		temp.push_back(arr[j]);
		j++;
	}
}

//copying rem elements to the first vector
while(i<=m){
	temp.push_back(arr[i++]);
}

//copying rem elements to the second vector
while(j<=e){
	temp.push_back(arr[j++]);
}

int k=0;

//copying the elements from temp to original array
for(int idx=s;idx<=e;idx++){
	arr[idx]=temp[k++];
}

return;
}

void mergeSort(vector<int> &arr, int s,int e){

//base case
	if(s>=e){
		return ;
	}

	int mid=(s+e)/2;

//recursive case
	mergeSort(arr,s,mid);
	mergeSort(arr,mid+1,e);
	return merge(arr,s,e);

}


int main(){

vector<int> arr={10,5,2,0,7,6};

int n=arr.size()-1;
mergeSort(arr,0,n);

for(int i=0;i<=n;i++){

	cout<<arr[i]<<" ";
}

return 0;
}
