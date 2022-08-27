#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> all_subsets;
void generate(vector<int> &subset, int i, vector<int> &nums)
{

    // base condition
    if (i == nums.size())
    {
        all_subsets.push_back(subset);
        return;
    }

    // ith element not include
    generate(subset, i + 1, nums);

    // ith element in subset
    subset.push_back(nums[i]);

    generate(subset, i + 1, nums);

    subset.pop_back(); // backtracking step
}

int main()
{

    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int> subset;
    generate(subset, 0, nums);

    for (auto subset : all_subsets)
    {
        for (auto ele : subset)
        {
            cout << ele << " ";
        }
        cout << endl;
    }

    return 0;
}