#include <bits/stdc++.h>

using namespace std;

int search(vector<int> &arr, int n, int x)
{
    // Write your code here.

    int l = 0;
    int h = arr.size() - 1;
    // Time Complexity
    // O(logn)

    // Approach
    // You have to identify which portion has to be eleminated to find the element easily
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == x)
            return mid;

        // left sorted
        if (arr[l] <= arr[mid])
        {
            if (x >= arr[l] and x <= arr[mid])
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
            if (x >= arr[mid] and x <= arr[h])
            {
                l = mid + 1;
            }
            else
            {
                h = mid - 1;
            }
        }
    }
    return -1;
    // Return the position of K in ARR else return -1.
}
