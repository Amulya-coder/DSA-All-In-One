//Problem link https://www.codechef.com/problems/LECANDY


#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main(){

 ll t;
 cin>>t;

	while(t--){

	ll n,c;
	cin>>n>>c;

	ll a[n];

    bool flag=true;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=c){
			c=c-a[i];
		}

		else{
			flag=false;	
		}	

	}
	if(flag==true){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}

}	


return 0;
}