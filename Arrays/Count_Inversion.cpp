#include<bits/stdc++.h>

using namespace std;


    //Brute force O(n2)
    // int count=0;
    // for(int i=0;i<n;i++){
        
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]>a[j]){
    //             count++;
    //         }
    //     }
    // }
    // cout<<count<<endl;
    
    int merge(int a[],int l,int mid,int r){
        int n1=mid-l+1;
        int n2=r-mid;

        int a1[n1];
        int b1[n2];

        for(int i=0;i<n1;i++){
            a1[i]=a[l+i];
        }

        for(int j=0;j<n2;j++){
            b1[j]=a[mid+j+1];
        }

        int i=0,j=0,k=l;
        int inv=0;
        while(i<n1 && j<n2){
            if(a1[i]<b1[j]){
               a[k]=a1[i];
               k++;
               i++; 
            }

            else{
                a[k]=b1[j];
                inv+=n1-i;
                k++;
                j++;
            }
        }

        while(i<n1){
            a[k]=a1[i];
            k++;
            i++;
        }
        while(j<n2){
            a[k]=b1[j];
            k++;
            j++;
        }

        return inv;
        
    }

    long long mergeSort(int arr[],int l,int r){
        
        long long inv=0;
    
        if(l<r){
            int mid=(l+r)/2;
            inv+=mergeSort(arr,l,mid);
            inv+=mergeSort(arr,mid+1,r);
            inv+=merge(arr,l,mid,r);
        }
        return inv;
        
    }

    //Using Merge sort
    int main(){
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

    
        cout<<mergeSort(a,0,n);
        


     return 0;

    }

   
