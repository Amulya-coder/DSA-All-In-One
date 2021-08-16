#include<bits/stdc++.h>

using namespace std;

int pairSticks(vector<int> length,int D){
	//Logic
	sort(length.begin(),length.end());
	int count=0;
	
	//Time Complexity O(n)
    if(length.empty()|| length.size()==1){
    	return count;
    }
 	
 	else{
 		for(int i=0;i<length.size()-1;){
 			if(length[i+1]-length[i]<=D){
 				count++;
 				
 			}
 			i+=2;
 		}
 	}

	return count;
	
}

int main(){
	vector<int> arr={1,3,3,9,4};

	cout<<pairSticks(arr,2)<<endl;

}
