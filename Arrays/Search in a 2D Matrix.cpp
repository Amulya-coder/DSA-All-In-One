#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int target)
    {
        int n = arr.size();
        int m = arr[0].size();

        int low = 0;
        int high = (n * m) - 1;

        while (low <= high)
        {
            int mid = (high - low) / 2 + low;

            // index/no. of col -> index of the row
            // index%no. of col -> index of the col
            int midrow = mid / m;
            int midcol = mid % m;
            if (target == arr[midrow][midcol])
            {
                return true;
            }
            else if (arr[midrow][midcol] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        return false;
    }
};