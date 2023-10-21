#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int search(vector<int> &arr, int target)
    {

        int low = 0;
        int high = arr.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (arr[mid] == target)
            {
                return mid;
            }

            // check left half sorted
            if (arr[mid] >= arr[low])
            {
                if (arr[low] <= target and target < arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }
            // right part sorted
            else
            {
                if (arr[mid] < target and target <= arr[high])
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};