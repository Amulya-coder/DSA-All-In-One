#include <bits/stdc++.h>

using namespace std;

int findMin(vector<int> &arr)
{
    // Write your code here.
    int l = 0;
    int h = arr.size() - 1;
    int ans = INT_MAX;

    // Time Complexity O(log2)N
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (arr[l] <= arr[h])
        {
            ans = min(ans, arr[l]);
            break;
        }
        if (arr[l] <= arr[mid])
        {
            ans = min(ans, arr[l]);
            l = mid + 1;
        }
        else
        {
            ans = min(ans, arr[mid]);
            h = mid - 1;
        }
    }
    return ans;
}