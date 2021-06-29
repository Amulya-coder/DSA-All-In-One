#include<bits/stdc++.h>


using namespace std;

void printArray(int arr[],int n){

for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}cout<<endl;


}

void permutationDuplicates(int a[],int cid,int n){
	
	//base condition
	if(cid==n-1){
	printArray(a,n);
	return;
	}

	//Creating the empty set for checking if the element already exists or not
	unordered_set<int> set;
	for(int i=cid;i<n;i++){

	//If the element is already present in the set then we skip not adding that element in the set
	if(set.find(a[i])!=set.end()){
		continue;
	}

	//If the element at current position does not present int the set then we insert it to set.
	set.insert(a[i]);
	//swap
	swap(a[i],a[cid]);

	//recursive call
	permutationDuplicates(a,cid+1,n);
	
	//Again swap
	swap(a[i],a[cid]);


	}

}


int main(){

int arr[]={1,1,2};
int n=3;
permutationDuplicates(arr,0,n);

	return 0;
}