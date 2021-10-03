#include<bits/stdc++.h>

using namespace std;

void clearIthbit(int &n,int i){
	int mask=~(1<<i);
	n=n & mask;
	
}

void setIthbit(int &n,int i){
	int mask=1<<i;
	n=n|mask;
}

void updateIthbit(int &n,int i,int v){

	clearIthbit(n,i);
	int mask= v<<1;
	n=n|mask; //set bit

}
int main(){
	int n=13;

	// clearIthbit(n,2);
	// setIthbit(n,4);
	updateIthbit(n,2,0);
	cout<<n<<endl;
	return 0;
}