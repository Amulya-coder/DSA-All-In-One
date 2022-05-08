/*
(Right or counter-clockwise)
Rotate the array to the right by k steps

Input: [1,2,3,4,5,6,7]
K: 3
Output: 5 6 7 1 2 3 4

Explanation:
Rotate array by 1 step to right: [7,1,2,3,4,5,6]
Rotate array by 2 steps to right: [6,7,1,2,3,4,5]
Rotate array by 3 steps to right: [5,6,7,1,2,3,4]

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation:
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

Constraints:
1 <= nums.length <= 10^5
-2^31 <= nums[i] <= 2^31 - 1
0 <= k <= 10^5

Could you do it in-place with O(1) extra space?
*/

#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    void reverse(vector<int> &arr, int low, int high)
    {
        while (low < high)
        {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
    void rotate(vector<int> &nums, int k)
    {
        int n = (int)nums.size();

        k = k % n;
        // Reverse from 0 to n-k-1
        reverse(nums, 0, n - k - 1);

        // Reverse from n-k to n-1
        reverse(nums, n - k, n - 1);

        // Reverse the whole array
        reverse(nums, 0, n - 1);
    }
};
