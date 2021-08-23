#include<bits/stdc++.h>

using namespace std;

vector<int> sortingComparator(vector<int> &arr,bool flag){

		int n=arr.size();

		sort(arr.begin(),arr.end());

		if(flag){
			return arr ; 
		}

		else{
			reverse(arr.begin(),arr.end());
			return arr;
		}

}

int main(){

vector<int> arr={58,59,22,22,28,29,40};
sortingComparator(arr,0);

for(auto x:arr){
	cout<<x<<" ";
}

	return 0;
}