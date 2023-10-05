#include <bits/stdc++.h>

using namespace std;

bool searchInARotatedSortedArrayII(vector<int> &arr, int k)
{
    // Write your code here.
    // Time Complexity O(log2)N avg. case
    // Worst case O(n/2)
    int l = 0;
    int h = arr.size() - 1;

    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == k)
            return true;

        else if (arr[mid] == arr[l] and arr[mid] == arr[h])
        {
            l = l + 1;
            h = h - 1;
            continue;
        }

        // left sorted
        else if (arr[l] <= arr[mid])
        {
            if (k >= arr[l] and k <= arr[mid])
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        // right sorted
        else
        {
            if (k >= arr[mid] and k <= arr[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return false;
}
