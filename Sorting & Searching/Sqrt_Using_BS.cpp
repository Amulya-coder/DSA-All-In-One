#include <bits/stdc++.h>

using namespace std;

int floorSqrt(int n)
{
    // Write your code here.
    // floor value here means return the max value <= n

    int low = 1;
    int high = n;
    int ans;
    while (low <= high)
    {
        long long int mid = (low + high) / 2;
        long long val = mid * mid;
        if (val <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return ans;
}
