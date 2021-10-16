#include<bits/stdc++.h>

using namespace std;

vector<int> v;

vector<int> helper(int N){
	if(N==0){
		return v;
	}

	helper(N-1);
	v.push_back(N);

	return v;

}

vector<int> printIncreasing(int N){

return helper(N);	

} 


int main(){

int N=5;

vector<int> res=printIncreasing(N);

for(int i=0;i<res.size();i++){
	cout<<res[i]<<" ";
}

	return 0;
}