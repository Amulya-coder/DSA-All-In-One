#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minPairSum(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());

        int i = 0, j = nums.size() - 1;
        vector<pair<int, int>> vp;
        while (i < j)
        {
            vp.push_back({nums[i], nums[j]});
            i++;
            j--;
        }

        int max_sum = INT_MIN;
        for (auto i : vp)
        {
            max_sum = max(max_sum, i.first + i.second);
        }

        return max_sum;
    }
};