/*
Input: 
M = 3, X[] = [2 1 6] 
N = 2, Y[] = [1 5]
Output: 3
Explanation: 
The pairs which follow xy > yx are 
as such: 21 > 12,  25 > 52 and 61 > 16 .
*/

#include<bits/stdc++.h>

using namespace std;

int getindex(int y[],int n,int ele){
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(y[mid]>ele){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
}

int main(){

    int m,n;
    cin>>m>>n;

    int x[m];

    for(int i=0;i<m;i++){
        cin>>x[i];
    }
    
    int y[n];
    for(int j=0;j<n;j++){
        cin>>y[j];
    }

    //Brute force 
    //Time Complexity=O(n^2);
    // int count=0;
    // for(int i=0;i<m;i++){
    //     for(int j=0;j<n;j++){
    //     if(pow(x[i],y[j])>pow(y[i],x[j])){
    //         count++;
    //     }
        
        
    //     }
    // }
    // cout<<count<<endl;
    sort(x,x+n);
    sort(y,y+n);
    int zero=0,one=0,three=0,four=0,two=0;
    for(int i=0;i<n;i++){
        if(y[i]==0){
            zero++;
        }
        if(y[i]==1){
            one++;
        }
        if(y[i]==2){
            two++;
        }
        if(y[i]==3){
            three++;
        }
        if(y[i]==4){
            four++;
        }
    }

    //traversing x elements
    int count=0;
    for(int i=0;i<m;i++){
        //No valid pair possible
        if(x[i]==0){
            continue;
        }
        //In case of 1 check how many zros are there in y array
        else if(x[i]==1){
           count+=zero; 
        }
        else if(x[i]==2){
            int index=getindex(y,n,2);
            if(index!=-1){
            count+=n-index;
            }
            count-=three;
            count-=four;
            count+=zero+one;
        }
        else {
            //Here index is returning the first greater element index
            //by doing n-index from count we get the no. of valid count pairs 
            int index=getindex(y,n,x[i]);
            if(index!=-1){
            count+=n-index;
            }
            count+=zero+one;
             if(x[i]==3){
                count+=two;
            }
        }
        //Handling for the zero and one x={1,2,6} y={0,1,5}  
        //6^0>0^6 or 2^0>0^2
        //6^1>1^6 or 2^1>1^2
        

    }

    cout<<count<<endl;

    return 0;
}