#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {

        // [0,2], [1,1], [2,0]
        //[0,3], [1,2], [2,1], [3,0]

        int row = 0;
        int col = 0;
        int n = mat.size();
        int m = mat.size();
        int sum1 = 0;
        int sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            // Primary diagonal
            sum1 += mat[i][i];
        }
        int j = m - 1;
        for (int i = 0; i < n; i++)
        {
            sum2 += mat[i][j];
            j--;
        }
        if (n % 2 != 0)
        {
            int mid = n / 2;
            sum2 -= mat[mid][mid];
        }
        return (sum1 + sum2);
    }
};