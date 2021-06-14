#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main(){


ll t;
cin>>t;


while(t--){

int n;
cin>>n;

int w[n];

for(int i=0;i<n;i++){

	cin>>w[i];
}


int min=w[0];
int count=0;
for(int i=0;i<n;i++){

if(w[i]<min){
	min=w[i];
}

}

int ans=0;
for(int i=0;i<n;i++){

if(w[i]>min){
 ans+=w[i]-min;
}


}
cout<<ans<<endl;

}


return 0;
}