#include<bits/stdc++.h>

using namespace std;


void clearIthbit(int &n,int i){

int mask=~(1<<i);
n=n&mask;
}

void updateIthbit(int &n,int i,int v){
	clearIthbit(n,i);
	int mask=v<<i;
	n=n|mask;
}

void clearLastIbits(int &n,int i){
	int mask=(-1<<i);
	n=(n&mask);
}

int main(){
int n=15;
// updateIthbit(n,2,0);
clearLastIbits(n,2);
cout<<n<<endl;
}