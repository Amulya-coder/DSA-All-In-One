#include<bits/stdc++.h>

using namespace std;



int main(){

int arr[]={12,1,4,12,3,4};

int n=7;

int res=0;
for(int i=0;i<n;i++){
	res^=arr[i];
}
cout<<res<<endl;

}