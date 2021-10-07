#include<bits/stdc++.h>

using namespace std;

//for calculating normal a^b (a to power b) you can use fast exponentiation but for large numbers we have to
//use modulo to compute large values for a^b
long int power(int a,int n, int mod){

int res=1;

while(n>0){
	if(n&1){
		res=(res * a%mod)%mod;
	}
	a=(a%mod * a%mod)%mod;
	n=n>>1;
}


return res;

}

int main(){

 int x=12,y=25;
int mod=10007;

cout<<power(x,y,mod)<<endl;


	return 0;
}