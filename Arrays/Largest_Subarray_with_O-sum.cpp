/*
Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

Example 1:

Input:
N = 8
A[] = {15,-2,2,-8,1,7,10,23}
Output: 5
Explanation: The largest subarray with
sum 0 will be -2 2 -8 1 7.
Your Task:
You just have to complete the function maxLen() which takes two arguments an array A and n, where n is the size of the array A and returns the length of the largest subarray with 0 sum.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).

Constraints:
1 <= N <= 10^5
-1000 <= A[i] <= 1000, for each valid i
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &A, int n)
    {
        // brute force Approach O(n^2)
        /*
        int length=0;
        for(int i=0;i<n-1;i++){
            int sum=A[i];
            for(int j=i+1;j<n;j++){
                sum+=A[j];
                if(sum==0){
                    length=max(length,j-i+1);
                }
            }
        }

        return length;
        */

        // Optimised Approach using map
        //  Time Complexity O(n log n)
        //  Space Complexity O(n)
        unordered_map<int, int> mp;

        // Prefix sum or previously exist sum
        int sum = 0;

        // maximum length of the subarray
        int maxi = 0;

        for (int i = 0; i < n; i++)
        {
            sum += A[i];

            if (sum == 0)
            {
                maxi = i + 1;
            }
            else
            {
                if (mp.find(sum) != mp.end())
                {
                    maxi = max(maxi, i - mp[sum]);
                }
                else
                {
                    mp[sum] = i;
                }
            }

            return maxi;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i)
        {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}