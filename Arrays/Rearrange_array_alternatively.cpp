#include<bits/stdc++.h>

using namespace std;

/* Input:
N = 6
arr[] = {1,2,3,4,5,6}
Output: 6 1 5 2 4 3
Explanation: Max element = 6, min = 1, 
second max = 5, second min = 2, and 
so on... Modified array is : 6 1 5 2 4 3.
*/

int main(){
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int max_index=n-1;
    int min_index=0;

    int max=a[n-1]+1;//for effective modulo

    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]=(a[max_index]%max)*max+a[i];
            max_index--;
        }
        else{
           a[i]=(a[min_index]%max)*max+a[i];
            min_index++;
        }
    }

    for(int i=0;i<n;i++){
        a[i]/=max;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }cout<<endl;



    return 0;
}