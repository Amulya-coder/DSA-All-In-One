//Check such that there exists two elements in an array such that there sum is equal to k

#include<bits/stdc++.h>

using namespace std;

//Using bool pair su1m
bool pair_sum(int a[],int n,int k){

    int s=0;
    int l=n-1;

    for(int i=0;i<n;i++){
        if(a[s]+a[l]==k){
            return true;
        }

        else if(a[s]+a[l]<k){
            s++;
        }
        else{
            l--;
        }
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    int k;
    cin>>k;

    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
    cout<<pair_sum(a,n,k)<<endl;

    //Brute force O(n^2) 
    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]+a[j]==k){
    //             cout<<i<<" "<<j<<endl;
    //             ans=1;
    //             break;
    //         }
    //     }
    //     if(ans==1){
    //         break;
    //     }
    // }

    //But we can further optimised the sol'n by traversing linearly using two pointers approach
    //TC-->O(n)
    // int s=0;
    // int l=n-1;
    // for(int i=0;i<n;i++){
    //     if(a[s]+a[l]==k){
    //         cout<<s<<" "<<l<<endl;
    //         ans=1;
    //         break;
    //     }

    //     else if(a[s]+a[l]<k){
    //         s++;
    //     }
    //     else{
    //         l--;
    //     }
    // }
    // cout<<ans<<endl;

    return 0;
}