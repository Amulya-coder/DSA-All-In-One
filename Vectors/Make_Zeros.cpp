#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr){
    // your code goes here
    int n=arr.size();
	vector<int> temp(n,1);

	vector<int> v1;
	vector<int> v2;

	for(int i=0;i<arr.size();i++){
		for(int j=0;j<arr[i].size();j++){
			if(arr[i][j]==0){
				v1.push_back(i);
				v2.push_back(j);
			}
		}
	}

	for(auto x:v1){
		for(int j=0;j<arr.size();j++){
			arr[x][j]=0;
		}
	}

	for(auto y:v2){
		for(int j=0;j<arr.size();j++){
			arr[j][y]=0;
		}
	}

	return arr;
    
}
// for(int i=0;i<arr.size();i++){
	//
	// 	for(int j=0;j<arr.size();j++){
	     // It will give more zeroes becz we are looping more number of times and making rows and columns 
	     // zeros
	// 		if(arr[i][j]==0){
	// 			for(int k=0;k<arr.size();k++){
	// 				arr[i][k]=0;
	// 			}
	// 			for(int k=0;k<arr.size();k++){
	// 				arr[k][j]=0;
	// 			}
	// 		}
	// 	}
	// }