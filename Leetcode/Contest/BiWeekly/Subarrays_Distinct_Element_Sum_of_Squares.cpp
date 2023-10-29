#include <bits/stdc++.h>

using namespace std;

int sumcounts(vector<int> &nums)
{

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        unordered_map<int, int> mp;
        int cnt = 0;

        for (int j = i; j < nums.size(); j++)
        {
            mp[nums[j]]++;
            if (mp[nums[j]] == 1)
            {
                cnt++;
            }
            sum += (cnt * cnt);
        }
    }
    return sum;
}