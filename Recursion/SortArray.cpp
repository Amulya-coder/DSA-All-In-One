//Check if an array is sorted or not using recursion

#include<bits/stdc++.h>

using namespace std;


bool sortArray(int arr[],int n){

if(n==1){
    return true;
}

bool remainArray=sortArray(arr+1,n-1);
return (arr[0]<arr[1] && remainArray);


}



int main(){


int arr[]={4,2,3,1,5};

cout<<sortArray(arr,5)<<endl;


    return 0;
}