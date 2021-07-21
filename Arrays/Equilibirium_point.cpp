#include<bits/stdc++.h>

using namespace std;

int main(){

        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        int sum=0;
        int sum_so_far=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }

        if(n==1){
            return 1;
        }

        else{
            for(int i=0;i<n;i++){
                sum=sum-a[i];
                if(sum==sum_so_far){
                cout<<i+1<<endl;
                break;
                }
                sum_so_far=sum_so_far+a[i];
                // cout<<i<<" "<<sum_so_far<<endl;
            }
        }

    // return -1;
}