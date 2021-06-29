#include<bits/stdc++.h>

using namespace std;

//Linear Search
void linearSearch(int arr[],int n,int key){

	int loc=0;

	for(int i=0;i<n;i++){

		if(arr[i]==key){
			loc++;
		}

	}

	if(loc!=0){
		cout<<key<<" is present in the array"<<endl;
	}

	else{
		cout<<key<<" is not present in the array"<<endl;
	}


}


int main(){

	int arr[]={4,8,2,1,10};
	int n=5;

	int element=5;

	linearSearch(arr,n,element);


	return 0;
}