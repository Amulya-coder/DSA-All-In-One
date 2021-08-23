#include<bits/stdc++.h>

using namespace std;

int defin(int W,int H,vector<pair<int,int>> position){

vector<int> a;
vector<int> b;

a.push_back(0);
b.push_back(0);


//Putting the vector pairs elements into a and b vectors a represent x coordinate elements and b 
//represents y coordinate elements
for(int i=0;i<position.size();i++){
	a.push_back(position[i].first);
	b.push_back(position[i].second);
}

//Adding the ending points width+1 in a vector and height+1 in b vector
// for taking the difference from last tower
a.push_back(W+1);
b.push_back(H+1);

//Sorting both the vectors
sort(a.begin(),a.end());
sort(b.begin(),b.end());

// for(int i=0;i<a.size();i++){
// 	cout<<a[i]<<" ";
// }cout<<endl;

// for(int i=0;i<b.size();i++){
// 	cout<<b[i]<<" ";
// }

//Taking the maximum width and maximum height variable
int mx=0,my=0;

//Finding the maximum row and  maximum column
for(int i=0;i<a.size()-1;i++){
mx=max(mx,a[i+1]-a[i]-1);
my=max(my,b[i+1]-b[i]-1);
}

// cout<<mx<<my<<endl;
return mx*my;

}


int main(){

vector<pair<int,int>> v={{1,2},{2,3},{3,4}};


cout<<defin(8,11,v)<<endl;


	return 0;
}