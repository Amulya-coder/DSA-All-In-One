#include<bits/stdc++.h>

using namespace std;

void clearBitsinRange(int &n,int i,int j){
	int a=(~0)<<j+1;
	int b=(1<<i)-1;
	int mask=a|b;
	n=n&mask;
}
int main(){
int n=31;
clearBitsinRange(n,1,3);

cout<<n<<endl;
}