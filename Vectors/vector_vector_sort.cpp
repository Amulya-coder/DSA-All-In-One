#include<bits/stdc++.h>

using namespace std;

int calcTotalmarks(vector<int> m){
	return m[0]+m[1]+m[2];
}
bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2){
	vector<int> m1=s1.second;
	vector<int> m2=s2.second;

	return calcTotalmarks(m1)>calcTotalmarks(m2);
}
int main(){

vector<pair<string,vector<int>>> student_marks={
	{"Rohan",{10,11,20}},
	{"Sonu",{10,21,3}},
	{"Prateek",{4,5,6}},
	{"Vivek",{10,13,20}}	

};
sort(student_marks.begin(),student_marks.end(),compare);

//We will get the sorted marks with student
for(auto s:student_marks){
	cout<<s.first<<" "<<calcTotalmarks(s.second)<<endl;
}

}