/*
Description:
Given an array arr[] denoting heights of N towers and a positive integer K, you have to
modify the height of each tower either by increasing or decreasing them by K only once.
After modifying, height should be a non-negative integer.
Find out the minimum possible difference of the height of shortest and longest towers after
you have modified each tower.

Example 1:

Input:
K = 2, N = 4
Arr[] = {1, 5, 8, 10}
Output:
5
Explanation:
The array can be modified as
{3, 3, 6, 8}. The difference between
the largest and the smallest is 8-3 = 5.
Example 2:

Input:
K = 3, N = 5
Arr[] = {3, 9, 12, 16, 20}
Output:
11
Explanation:
The array can be modified as
{6, 12, 9, 13, 17}. The difference between
the largest and the smallest is 17-6 = 11.

Your Task:
You don't need to read input or print anything. Your task is to complete the function getMinDiff() which takes the arr[], n and k as input parameters and returns an integer denoting the minimum difference.


Expected Time Complexity: O(N*logN)
Expected Auxiliary Space: O(N)

Constraints
1 ≤ K ≤ 10^4
1 ≤ N ≤ 10^5
1 ≤ Arr[i] ≤ 10^5
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int ans = arr[n - 1] - arr[0];
        int smallest = arr[0] + k;
        int largest = arr[n - 1] - k;

        int maxi, mini;

        for (int i = 0; i < n - 1; i++)
        {
            mini = min(smallest, arr[i + 1] - k);
            maxi = max(largest, arr[i] + k);

            if (mini < 0)
                continue;
            ans = min(ans, maxi - mini);
        }
        return ans;
    }

    // Brute force sol'n
    /*
    int max_ele = INT_MIN;
    int min_ele = INT_MAX;
    int min_diff = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
        {
            arr[i] = arr[i] + k;
        }
        else
        {
            arr[i] = arr[i] - k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        max_ele = max(arr[i], max_ele);
        min_ele = min(arr[i], min_ele);
    }
    min_diff = abs(max_ele - min_ele);
    return min_diff;
    */
};