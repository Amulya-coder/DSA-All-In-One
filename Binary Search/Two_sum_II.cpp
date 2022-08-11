/*
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.

Example:
Input: numbers = [2,7,11,15], target = 9
Output: [1,2]
Explanation: The sum of 2 and 7 is 9. Therefore, index1 = 1, index2 = 2. We return [1, 2].
*/
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &arr, int target)
    {

        int l = 0;
        int r = arr.size() - 1;
        vector<int> v;

        while (l < r)
        {
            int mid = (l + r) / 2;
            int sum = arr[l] + arr[r];
            if (sum == target)
            {
                v.push_back(l + 1);
                v.push_back(r + 1);
                return v;
            }

            if (sum >= target)
            {
                if (arr[l] + arr[mid] > target)
                {
                    r = mid - 1;
                }
                else
                {
                    r--;
                }
            }
            else if (sum < target)
            {
                if (arr[r] + arr[mid] < target)
                {
                    l = mid + 1;
                }
                else
                {
                    l++;
                }
            }
        }
        return v;
    }
};