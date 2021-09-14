#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(n x m)
 vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    // your code goes here
    int row_end=m-1,col_end=n-1;

    vector<int> res;

    //O(n) Time Complexity
    while(col_end>=0){
    if((col_end+1)%2==0){
    for(int row=0;row<=row_end;row++){
        res.push_back(arr[row][col_end]);
    }
    col_end--;
    }
    else{
    for(int row=row_end;row>=0;row--){
        res.push_back(arr[row][col_end]);
    }
    col_end--;
    }
    }

    return res;
}

//Another solution
// vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
// {
//     int row_end = m-1 , col_end = n-1;
//     vector <int> res;
    
//     while(col_end>=0){
        
//     for(int row=0; row<=row_end; row++)
//     res.push_back(arr[row][col_end]);
    
//     col_end--;
    
//     for(int row = row_end; row>=0; row--)
//      res.push_back(arr[row][col_end]);
     
//       col_end--;
     
//     for(int row=0; row<=row_end; row++)
//     res.push_back(arr[row][col_end]);
    
//      col_end--;
     
//      for(int row = row_end; row>=0; row--)
//      res.push_back(arr[row][col_end]);
    
//         col_end--;
//     }
//      return res;
// }
//Output 4 5 6 7 8 15 14 3 2 12 16 9 10 11 12 1

int main(){

   vector<vector<int>>arr={{1,2,3,4},
                {12,13,14,5},
                {11,16,15,6},
                {10,9,8,7}};
    int n=4,m=4;

    vector<int> a=WavePrint(m,n,arr);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }

	return 0;
}