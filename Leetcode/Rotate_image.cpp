#include <bits/stdc++.h>

using namespace std;

void rotate(vector<vector<int>> &nums)
{

    int n = nums.size();
    int m = nums[0].size();
    int i = 0, j = 0;
    // For Transpose
    while (i < n)
    {

        while (j < m)
        {
            swap(nums[i][j], nums[j][i]);
            j++;
        }
        i++;
        j = i;
    }

    // For Rotating by 90
    int i = 0;

    while (i < n)
    {
        int front_col = 0;
        int back_col = m - 1;

        while (front_col < back_col)
        {
            swap(nums[i][front_col], nums[i][back_col]);
            front_col++;
            back_col--;
        }
        i++;
    }
}