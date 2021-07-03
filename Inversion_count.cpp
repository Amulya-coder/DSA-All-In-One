/*
Question 2 find inversion count of array
Input :
N
N elemnts of array
Example :
5
8 4 9 2 8
Output : 
5
Large input : 
5
100000000 10000 10000000000 10 100000000
Output : 
5
*/


#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int bit[N];

//Here x parameter is the value
void update(int i,int x){
    for(;i<=N;i+=(i&(-i))){
        bit[i]+=x;
    }
}

int sum(int i){
    int ans=0;
    for(;i>0;i-=(i&(-i))){
        ans+=bit[i];
    }
    return ans;
}

int main(){

int n;
cin>>n;

int a[n+1];

map<long long,int>mp;

for(int i=1;i<=n;i++){
    cin>>a[i];
    mp[a[i]];
}

//Compression of numbers for a[i]>10^6
int ptr=1;
for(auto &pr:mp){
    pr.second=ptr++;
}

for(int i=1;i<=n;i++){
    a[i]=mp[a[i]];
 
}

//finding the inversion count

int cnt=1;
for(int i=1;i<=n;i++){
    cnt+=sum(N)-sum(a[i]);
    update(a[i],1);
}


cout<<cnt<<endl;

//This will work for a[i]<=10^5;
// for(int i=1;i<=n;i++){
//     cin>>a[i];
//     update(i,a[i]);
// }
// int cnt=0;
// for(int i=1;i<=n;i++){
//     cnt+=sum(n)-sum(a[i]);
//     update(a[i],1);
// }


}
