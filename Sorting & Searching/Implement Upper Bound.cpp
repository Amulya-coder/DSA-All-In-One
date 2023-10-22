#include <bits/stdc++.h>

using namespace std;

int upperBound(vector<int> &arr, int x, int n)
{
    // Write your code here.
    // Upper Bound - Smallest index greater than arr[ind]>x
    // Ex- [2,3,6,7,8,8,9,9,10] x=6
    // Ans - 7

    // Ex- [2,3,6,7,8,8,9,10,11] x=12
    // Ans- Hypothetical ind -> 10
    int low = 0;
    int high = n - 1;

    int curr_greater = n;

    if (arr[low] >= x)
    {
        return low;
    }

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] > x)
        {
            curr_greater = mid;
            high = mid - 1;
        }
        else if (arr[mid] <= x)
        {
            low = mid + 1;
        }
    }
    return curr_greater;
}