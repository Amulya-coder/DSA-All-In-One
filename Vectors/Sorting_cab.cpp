#include<bits/stdc++.h>

using namespace std;

//return the pair in sorted order
// {(2,3),(1,2),(3,4),(2,4),(1,4)}
//output{(1,2),(2,3),(1,4),(2,4),(3,4)}

bool compare(pair<int,int> s1,pair<int,int> s2){
    int d=sqrt((s1.first)*(s1.first)+(s1.second)*(s1.second));
    int e=sqrt((s2.first)*(s2.first)+(s2.second)*(s2.second));
    
    return d<e;
}
vector<pair<int,int>> sortCabs(vector<pair<int,int>> v){
    // your code  goes here
    
    sort(v.begin(),v.end(),compare);
    return v;
    
    
}

int main(){
	vector<pair<int,int>> v={
		{2,3},{1,2},{3,4},{2,4},{1,4}};

	vector<pair<int,int>> res=sortCabs(v);

	for(auto i:res){
		cout<<i.first<<","<<i.second<<endl;
	}

}