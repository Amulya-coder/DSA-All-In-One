#include<bits/stdc++.h>

using namespace std;

vector<int> vec;
void helper(int k,int i,vector<int> v){

	if(i==v.size()){
		return ;
	}

	if(v[i]==k){
		vec.push_back(i);
	}

	helper(k,i+1,v);
	return ;

}


vector<int> findAllOccurences(int k,vector<int> v){
	vec.clear();
	helper(k,0,v);

	return vec;

}

int main(){

vector<int> arr={1,2,5,3,1,2,3,8,6,3,6,7,9};

int n=sizeof(arr)/sizeof(int);

vector<int> res;
res=findAllOccurences(3,arr);

for(int i=0;i<res.size();i++){
	cout<<res[i]<<" ";
}

return 0;
}