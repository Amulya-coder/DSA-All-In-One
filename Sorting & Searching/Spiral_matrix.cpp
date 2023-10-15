#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        // columns
        int left = 0, right = m - 1;
        // rows
        int top = 0, down = n - 1;
        vector<int> ans;

        // right, bottom,left,top

        while (top <= down and left <= right)
        {
            // left to right
            for (int i = left; i <= right; i++)
            {
                ans.push_back(mat[top][i]);
            }
            top++;

            // top to down
            for (int i = top; i <= down; i++)
            {
                ans.push_back(mat[i][right]);
            }
            right--;

            if (top <= down)
            {
                // left to right
                for (int i = right; i >= left; i--)
                {
                    ans.push_back(mat[down][i]);
                }
                down--;
            }

            // down to top
            if (left <= right)
            {
                for (int i = down; i >= top; i--)
                {
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }

        return ans;
    }
};