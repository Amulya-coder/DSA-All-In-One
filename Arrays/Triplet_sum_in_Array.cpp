//Find the triplet that sum to a given value.
//Triplet Sum in Array GFG
//Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to
// the given integer X. 
/*
Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
*/
#include<bits/stdc++.h>

using namespace std;


int main(){

int n;
cin>>n;
int target;
cin>>target;
int a[n];

for(int i=0;i<n;i++){
    cin>>a[i];
}

//This will take O(n logn)
sort(a,a+n);

int i=0;
int l=i+1;
int r=n-1;
int ans=0;

 //TC-->O(n) becz we are running only one while loop
while(l<r){
    
    if((a[i]+a[l]+a[r])<target){
        l++;
    }
    else{
        r--;
    }

    //To find the triplet present in an array
    // if(a[i]+a[l]+a[r]==target){
    //     ans=1;
    //     break;
    // }

    //To print the triplets
    if((a[i]+a[l]+a[r])==target){
        cout<<"["<<a[i]<<","<<a[l]<<","<<a[r]<<"]"<<endl;
        break;
    }
}
    // cout<<ans<<endl;

}