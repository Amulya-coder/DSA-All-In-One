#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int findMin(vector<int> &arr)
    {
        int low = 0;
        int high = arr.size() - 1;
        int min_ele = INT_MAX;

        if (arr[low] < arr[high])
        {
            return arr[low];
        }

        while (low <= high)
        {
            if (arr[low] < arr[high])
            {
                min_ele = min(min_ele, arr[low]);
                break;
            }
            int mid = (low + high) / 2;
            if (arr[mid] < min_ele)
            {
                min_ele = arr[mid];
            }
            if (arr[low] <= arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return min_ele;
    }
};