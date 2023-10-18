#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int thirdMax(vector<int> &nums)
    {
        int first_max = INT_MIN;
        int second_max = INT_MIN;
        int third_max = INT_MIN;

        bool flag = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (first_max < nums[i])
            {
                third_max = second_max;
                second_max = first_max;
                first_max = nums[i];
            }
            else if (second_max < nums[i] and first_max > nums[i])
            {

                third_max = second_max;
                second_max = nums[i];
            }
            else if (third_max < nums[i] and second_max > nums[i])
            {

                third_max = nums[i];
                // cout<<"third max:"<<third_max<<endl;
            }
            if (nums[i] == INT_MIN)
                flag = 1;
        }
        // cout<<"third max:"<<third_max<<endl;
        if (nums.size() < 3)
            return first_max;
        if (nums.size() >= 3 and flag == 0 and third_max == INT_MIN)
        {
            return first_max;
        }
        if (flag == 1 && second_max == INT_MIN)
            return first_max;

        return third_max;
    }
};