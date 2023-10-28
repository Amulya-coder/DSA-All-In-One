#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size();
        int m = matrix[0].size();
        int i = 0;
        int j = 0;
        while (i < n)
        {

            while (j < m)
            {
                swap(matrix[i][j], matrix[j][i]);
                j++;
            }
            i++;
            j = i;
        }
        i = 0;
        while (i < n)
        {
            int front_col = 0;
            int back_col = m - 1;
            while (front_col < back_col)
            {
                swap(matrix[i][front_col], matrix[i][back_col]);
                front_col++;
                back_col--;
            }
            i++;
        }
    }
};