#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here

    int low = 0;
    int high = n - 1;

    if (arr[high] < x)
        return n;
    int ans;
    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    if (low > high)
    {
        return low;
    }
}
