/*
Write an efficient algorithm that searches for a value target in an m x n integer matrix matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.

Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {

        // Simple Binary Search O(n)
        /*
        int i = 0;
        int j = arr[0].size() - 1;
        int n = arr.size() - 1;

        while (i <= n and j >= 0)
        {

            int mid = (i + j) / 2;
            if (arr[i][j] == target)
            {
                return true;
            }
            else if (arr[i][j] < target)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        return false;
        */

        // Time Complexity O(log(m*n))
        /*
        int low=0;
        int high=arr.size()-1;
        int col=arr[0].size()-1;
        int row;

        //finding the row in 1st Binary Search
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid][0]<=target and arr[mid][col]>=target){
                row=mid;
                break;
            }
            else if(arr[mid][0]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        if(row>=arr.size()){
            return false;
        }

        low=0;
        high=col;

        //Finding the column in second binary search
        while(low<=high){
        int mid=(low+high)/2;
        if(arr[row][mid]==target)
            return true;
        else if(arr[row][mid]>target){
            high=mid-1;
        }
           else{
               low=mid+1;
            }
    }
        return false;
        */
    }
};