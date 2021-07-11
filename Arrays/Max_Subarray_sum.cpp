//Calculate the maximum sum of an subarray
#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
    //We can optimised it using Prefix sum approach
    //Time Complexity O(n2)
    /*
    int currSum[n+1];
    currSum[0]=0;

    //Calculating the sum from 0 to ith position in sum array
    
    for(int i=1;i<=n;i++){
        currSum[i]=currSum[i-1]+a[i-1];
    }
    int maxSum=INT_MIN;
    
    //calculating the sum for all subarrays 
    for(int i=1;i<=n;i++){
        int sum=0;
        for(int j=0;j<i;j++){
            sum=currSum[i]-currSum[j];
            maxSum=max(sum,maxSum);
        }
    }

    cout<<maxSum<<endl; */

    //Above Approach takes O(n^2) time complexity but we can even more optimised it using

    //Kadanes Algorithm -> Take the sum of all subarrays and when encounter with a negative element discard it 
    //and start with a new sum 
    //Time Complexity: O(N)
    
    int currsum=0;
    int maxSum=INT_MIN;

    for(int i=0;i<n;i++){
        currsum+=a[i];
        if(a[i]<0){
            currsum=0;
        }
        maxSum=max(currsum,maxSum);
    }
    
    cout<<maxSum<<endl;



    //Brute Force for calculating the maximum sum subarray
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         int sum=0;
    //         for(int k=i;k<=j;k++){
                   //Printing the all subarrays 
    //             // cout<<a[k]<<" ";
    //             sum+=a[k];
    //         }
    //         maxSum=max(sum,maxSum);
    //     }
    // }
    // cout<<maxSum<<endl;

    return 0;
}