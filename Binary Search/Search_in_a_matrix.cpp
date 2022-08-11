/*
Given a matrix mat[][] of size N x M, where every row and column is sorted in increasing order
and a number X is given. The task is to find whether element X is present in the matrix or not.

Input:
N = 3, M = 3
mat[][] = 3 30 38
         44 52 54
         57 60 69
X = 62
Output:
0
Explanation:
62 is not present in the
matrix, so output is 0
*/

#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int matSearch(vector<vector<int>> &arr, int n, int m, int x)
    {

        int i = 0, j = m - 1;
        bool flag = false;

        // Time Complexity O(logn)
        while (i < n and j >= 0)
        {

            if (arr[i][j] == x)
            {
                flag = true;
                break;
            }
            else if (arr[i][j] < x)
            {
                i++;
            }
            else
            {
                j--;
            }
        }

        if (flag == true)
        {
            return 1;
        }

        return 0;
    }
};
