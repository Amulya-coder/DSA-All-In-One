#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];

    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int st=-1;
    int en=-1;
    int currsum=0;
    int i=0;
    int j=0;
   while(j<n && currsum+a[j]<=s){

       currsum+=a[j];
       j++;
       
    }

    if(currsum==s){
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n){
        currsum+=a[j];
        while(currsum>s){
            currsum-=a[i];
            i++;
        }

        if(currsum==s){

            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en<<endl;

    return 0;
}