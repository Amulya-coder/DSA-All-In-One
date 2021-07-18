#include<bits/stdc++.h>

using namespace std;

int main(){

  int n,m;
  cin>>n>>m;

  int a1[n];
  int a2[m];

  for(int i=0;i<n;i++){
      cin>>a1[i];
  }
  for(int j=0;j<m;j++){
      cin>>a2[j];
  }

  int x=n-1;int y=0;
  //Time Complexity O(nlogn)
   while(x>=0 && y<m){
       if(a1[x]>a2[y]){
           swap(a1[x],a2[y]);
           x--;
           y++;
       }
       else{
           x--;
       }
   }
   sort(a1,a1+n);
   sort(a2,a2+m);

    for(int i=0;i<n;i++){
        cout<<a1[i]<<" ";
    }cout<<endl;

    for(int j=0;j<m;j++){
        cout<<a2[j]<<" ";
    }

    return 0;
}