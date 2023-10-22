#include <bits/stdc++.h>

using namespace std;

int lowerBound(vector<int> arr, int n, int x)
{
    // Write your code here
    // Lower bound - smallest for which arr[ind]>=x
    // Lower bound - smallest for which arr[ind]>=x

    //[2,3,6,8,8,9,10] x=6
    // Ans - 6 ind - 2
    //[2,3,6,8,8,9,10] x=8
    // Ans- 8 ind- 3

    //[2,3,6,8,9,10] x=11
    // Ans=n -> 7
    int low = 0;
    int high = n - 1;

    int ans = n;
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

    return ans;
}
