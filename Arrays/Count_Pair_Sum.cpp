/* GFG Practice

Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Example 1:

Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation:
arr[0] + arr[1] = 1 + 5 = 6
and arr[1] + arr[3] = 5 + 1 = 6.

Example 2:

Input:
N = 4, K = 2
arr[] = {1, 1, 1, 1}
Output: 6
Explanation:
Each 1 will produce sum 2 with any 1.

Your Task:
You don't need to read input or print anything. Your task is to complete the function getPairsCount() which takes arr[], n and k as input parameters and returns the number of pairs that have sum K.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)

Constraints:
1 <= N <= 10^5
1 <= K <= 10^8
1 <= Arr[i] <= 10^6

*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int getPairsCount(int arr[], int n, int k)
    {

        // brute force O(n^2)
        /*
        int count = 0;
        int sum = 0;
        int i = 0;
        while (i < n)
        {
            int sum = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (sum < k)
                {
                    sum = arr[i] + arr[j];
                }

                if (sum == k)
                {
                    count++;
                }
            }
            i++;
        }

        return count;
        */

        // Optimised Approach using unordered map O(n)
        unordered_map<int, int> mp; // Storing the frequency of elements
        //(a,b)->b=sum or k-a
        // now we check in our map if that element is present then we increament the
        // count of ans i.e ans+frequency of that element in our map
        // ans+=mp[b];
        // and store the next element in map mp[arr[i]]++
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int b = k - arr[i];
            if (mp[b])
            {
                ans += mp[b];
            }
            mp[arr[i]]++;
        }

        return ans;
    }
};