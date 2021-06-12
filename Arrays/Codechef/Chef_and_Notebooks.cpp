#include<bits/stdc++.h>

using namespace std;
#define ll long long int


int main(){

int t;
cin>>t;

while(t--){

int x,y;
cin>>x>>y;

int k,n;
cin>>k>>n;

int p[n];
int c[n];



for(int i=0;i<n;i++){
	cin>>p[i]>>c[i];
}


bool flag=false;
for(int i=0;i<n;i++){
if(x<=y+p[i] && c[i]<=k){

flag=true;
break;	

}
}


cout<<(flag ? "LuckyChef" : "UnluckyChef")<<'\n';

}


}




// 	if(p[i]>=x){
// 		flag=true;
// 		break;
// 	}
// else{
// 	y=y+p[i];
// 	k=k-c[i];
// }
// cout<<y<<endl;
// if(flag==true){
// 	cout<<"LuckyChef"<<endl;
// }

// else{
// 	cout<<"UnluckyChef"<<endl;
// }