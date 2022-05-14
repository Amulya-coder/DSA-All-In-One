/*
leetcode

Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.



Example 1:

Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
Example 2:

Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].


Constraints:

1 <= nums.length <= 2 * 10^4
1 <= nums[i], k <= nums.length
*/

#include <bits/stdc++.h>

using namespace std;

const int num = 3 * 10000;
class Solution
{
public:
    // Optimised solution using Sliding window technique and Math concept
    int Traverse(vector<int> &nums, int k)
    {
        // Sliding Window technique
        unordered_map<int, int> mp;
        int j = 0;
        int total = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            // incresing the window size
            mp[nums[i]]++;

            while (mp.size() > k) // shrinking the window until our map size becomes less than equal to k
            {
                mp[nums[j]]--;

                if (mp[nums[j]] == 0)
                {
                    mp.erase(nums[j]);
                }
                j++;
            }

            // length of possible subarray
            total += i - j + 1;
        }
    }

    // subarray with k elements = subarray with at most k elements - subarray
    // with at most k-1 elements
    int subarraysWithKDistinct(vector<int> &nums, int k)
    {

        return Traverse(nums, k) - Traverse(nums, k - 1);
    }
};

// Time Complexity O(n^2) with two for loops
/*
int n = nums.size();
vector<string> s;
for (int i = 0; i < n; i++)
{
    vector<int> v(num, 0);
    string str = "";
    int count = 0;

    for (int j = i; j < n; j++)
    {

        v[nums[j]]++;

        if (v[nums[j]] == 1)
        {
            count++;
        }

        if (count > k)
        {
            break;
        }

        str += to_string(nums[j]) + ",";
        if (count == k)
        {
            s.push_back(str);
        }
    }
}
return s.size();
*/