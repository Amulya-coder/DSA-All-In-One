//Find the Largest Sum contiguous Subarray

    #include<bits/stdc++.h>

    using namespace std;

int main(){

    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     int mx=INT_MIN;
    
    //Brute Force Approach O(n^3) 
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
    //             sum+=a[k];
    //         }
    //         maxSum=max(sum,maxSum);
    //     }
    // }
    // cout<<maxSum<<endl;

    //O(n^2) Approach

    //Using Prefix sum Array
     int prefix[n+1];
     
     //Computing prefix sum of an array
     // prefix[0]=0;
     // for(int i=1;i<n;i++){
     //    prefix[i]=prefix[i-1]+a[i];
     // }

     // int sum;
     // for(int i=1;i<n;i++){
        
     //    for(int j=i;j<n;j++){
     //        sum=prefix[j]-prefix[i];
     //    }

     //    if(sum>mx){
     //        mx=sum;
     //    }
     // }
     // cout<<mx<<endl;


     //Using Kadane's Algorithm which will take Time Complexity
     //of --> O(n) and space Comp=O(1) 

     int maxSum=INT_MIN;
     int max_th=0;
     for(int i=0;i<n;i++){
        max_th+=a[i];

        if(max_th<0){
            max_th=0;
        }

        maxSum=max(max_th,maxSum);
     }
     cout<<maxSum<<endl;

}