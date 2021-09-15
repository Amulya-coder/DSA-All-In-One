#include<bits/stdc++.h>

using namespace std;

//We apply the Staircase search method
//pair is an inbulit kind of a data structure that can return two 
//entities
pair<int,int> staircaseSearch(int arr[][4],int n,int m,int key){

	if(key<arr[0][0] or key>arr[n-1][m-1]){
		return {-1,-1};
	}

	int i=0;
	int j=m-1;

//we do not cross the row boundary(n) and column boundary(greater or 
//	equal to 0 not beyond that) 
	while(i<=n and j>=0){
		if(arr[i][j]==key){
			return {i,j};
		}
		else if(arr[i][j]>key){
			j--;
		}
		else{
			i++;
		}
	}

	return {-1,-1};
}

int main(){

int arr[][4]={{10,20,30,40},
			  {15,25,35,45},
			  {27,29,37,48},
			  {32,33,39,50}};

int n=4,m=4;
pair<int,int>coord=staircaseSearch(arr,n,m,33);
cout<<coord.first<<" "<<coord.second<<endl;

	return 0;
}