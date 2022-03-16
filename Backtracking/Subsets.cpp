#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> subsets;
void generate(vector<int> &subset, int i, vector<int> &nums)
{

    // base condition
    if (i == nums.size())
    {
        subsets.push_back(subset);
        // If you want to print in increasing order
        sort(subsets.begin(), subsets.end());

        return;
    }

    // not include the ith element
    generate(subset, i + 1, nums);

    // include the ith element
    subset.push_back(nums[i]);

    generate(subset, i + 1, nums);

    subset.pop_back();
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
    vector<int> empty;
    generate(empty, 0, nums);

    for (auto i : subsets)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}