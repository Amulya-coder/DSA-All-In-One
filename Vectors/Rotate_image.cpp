#include<bits/stdc++.h>

using namespace std;

//Time Complexity O(n2)+O(n2)=2O(n2)=O(n2)
void rotate(vector<vector<int>>& matrix) {
      // your code goes here

      //firstly do the transpose
      for(int i=0;i<matrix.size();i++){
            //this loop goes till i for converting rows into columns and columns into row
      	for(int j=0;j<i;j++){
                  swap(matrix[i][j],matrix[j][i]);
      	}

      }

      //Time Complexity O(n2)
      for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
      }

      for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix.size();j++){
                  cout<<matrix[i][j]<<" ";
            }cout<<endl;
      }
}

int main(){

    vector<vector<int>> matrix={
      {1,2,3},{4,5,6},{7,8,9}
    };

    rotate(matrix);

    return 0;
}
