#include<bits/stdc++.h>

using namespace std;

//Modified Binary Search
int RotateSearch(vector<int> a,int key){

	int s=0;
	int e=a.size()-1;

	while(s<=e){

		int mid=(s+e)/2;

		if(a[mid]==key){
			return mid;
		}
		//left part
		if(a[s]<=a[mid]){
			if(key>=a[s] and key<=a[mid]){
				e=mid-1;
			}
			else{
				s=mid+1;
			}
		}

		//Right part
		else{
			if(key>=a[mid] and key<=a[e]){
				s=mid+1;
			}
			else{
				e=mid-1;
			}
		}

	}

	return -1;
}


int main(){

	vector<int> arr={4,5,6,7,0,1,2,3}; 

	int key=4;

	cout<<RotateSearch(arr,key)<<endl;
	return 0;
}