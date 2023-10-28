#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {

        int r = 0;
        int c = matrix[0].size() - 1;

        int N = matrix.size();
        while (r <= N - 1 and c >= 0)
        {
            if (matrix[r][c] == target)
            {
                return 1;
            }
            else if (matrix[r][c] < target)
            {
                r++;
            }
            else
            {
                c--;
            }
        }
        return 0;
    }
};