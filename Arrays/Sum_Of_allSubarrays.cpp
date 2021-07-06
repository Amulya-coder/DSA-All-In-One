#include<bits/stdc++.h>


using namespace std;

void subarraySum(int arr[],int n){


for(int i=0;i<n;i++){
    int sum=0;
    for(int j=i;j<n;j++){
        sum+=arr[j];
        cout<<sum<<" ";
    }
}

}

int main(){

int arr[]={1,2,0,7,2};
subarraySum(arr,5);

return 0;
}