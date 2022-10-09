#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {

        sort(nums.begin(), nums.end());

        // int ans=nums[0]+nums[1]+nums[2];
        int diff = INT_MAX;
        int ans = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int l = i + 1;
            int h = nums.size() - 1;
            while (l < h)
            {
                if (nums[i] + nums[l] + nums[h] == target)
                {
                    return target;
                }
                else if (abs(nums[i] + nums[l] + nums[h] - target) < diff)
                {
                    diff = abs(nums[i] + nums[l] + nums[h] - target);
                    ans = nums[i] + nums[l] + nums[h];
                }
                else if (nums[i] + nums[l] + nums[h] > target)
                {
                    h--;
                }
                else
                    l++;
            }
        }
        return ans;
    }
};