#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> targetIndices(vector<int> &nums, int x)
    {
        sort(nums.begin(), nums.end());

        //         vector<int>ans;
        //         for(int i=0;i<nums.size();i++){
        //             if(nums[i]==target){
        //                 ans.push_back(i);
        //             }
        //         }

        //         return ans;

        // Using binary Search
        int l = 0;
        int h = nums.size() - 1;
        vector<int> v;
        int startInd = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;
            if (nums[mid] == x)
            {
                startInd = mid;
                h = mid - 1;
            }
            else if (nums[mid] > x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        l = 0;
        h = nums.size() - 1;
        int endInd = -1;
        while (l <= h)
        {
            int mid = (l + h) / 2;

            if (nums[mid] == x)
            {
                endInd = mid;
                l = mid + 1;
            }
            else if (nums[mid] > x)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (startInd == -1 and endInd == -1)
        {
            return v;
        }

        while (startInd <= endInd)
        {
            v.push_back(startInd);
            startInd++;
        }
        return v;
    }
};