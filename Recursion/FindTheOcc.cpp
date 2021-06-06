//Finding the first and last occurence of a number

#include<bits/stdc++.h>

using namespace std;

int firstOcc(int arr[],int n,int i,int key){

if(i==n){
    return -1;
}

if(arr[i]==key){
    return i;
}

return firstOcc(arr,n,i+1,key);

}

int lastOcc(int arr[],int n,int i,int key){

int restArray=lastOcc(arr,n,i+1,key);

if(i==n){
    return -1;
}

if(restArray!=-1){
return restArray;
}

if(arr[i]==key){
    return i;
}

return -1;

}

int main(){

    int arr[]={4,1,2,3,2,3,5};
    int n=5;
    int i=0;
    int key=3;

    cout<<firstOcc(arr,n,i,key)<<endl;

    return 0;
}