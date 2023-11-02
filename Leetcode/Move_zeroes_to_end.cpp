#include<bits/stdc++.h>

using namespace std;

vector<int> moveZeros(int n, vector<int> arr) {
    // Write your code here.

    int i=0,j=0;

   

        while(i<=j and j<n){
            if(arr[i]!=0 and arr[j]!=0){
                j++;
            }
            else if(arr[j]==0 and arr[i]!=0){
                i=j;
                j++;
            }
            else if(arr[j]!=0 and arr[i]==0){
                swap(arr[i],arr[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    
    return arr;
}
