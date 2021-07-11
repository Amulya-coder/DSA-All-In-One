//Find out the subarray whose sum is equal to given sum 

#include<bits/stdc++.h>

using namespace std;

void SubarrayGivenSum(int arr[],int n,int s){
    
    int i=0;//Here i denotes starting index
    int j=0;//Here j denotes ending index
    int currsum=0;

   //Sliding Window Technique 
   //Time Complexity=O(n)
    while(j<n){

    //    cout<<currsum<<endl;

       currsum+=arr[j];

    if(currsum==s){
        cout<<i<<" "<<j<<endl;
        return;
    }

    while(i<=j && currsum>s){
        currsum=currsum-arr[i];
        i++;

        if(currsum==s){
           cout<<i<<" "<<j<<endl; 
            return;
        }
        
    }
    j++;
   }

   cout<<"Sum is not found"<<endl;
}

int main(){

    int n;
    cin>>n;
    int s;
    cin>>s;
    int a[n];

    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    SubarrayGivenSum(a,n,s);
  
    return 0;
}