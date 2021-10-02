#include<bits/stdc++.h>

using namespace std;



bool compare(pair<string,int> s1,pair<string,int> s2){
	// vector<int> m1=s1.first;
	return (s1.second < s2.second);
}

vector<pair<string,int>> sortfruits(vector<pair<string,int>> v,string s){

if(s=="price"){
sort(v.begin(),v.end(),compare);
}
else if(s=="name"){

	sort(v.begin(),v.end());
}
return v;
}


int main(){

vector<pair<string,int>> v={
	{{"Mango",100},{"Guava",70},{"Grapes",40},{"Apple",60},{"Banana",30}}
};
string s="name";
vector<pair<string,int>> res=sortfruits(v,s);

for(auto i:res){
	cout<<i.first<<","<<i.second<<endl;

}

}
