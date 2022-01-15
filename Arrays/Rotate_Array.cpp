#include <bits/stdc++.h>

using namespace std;

void reverse(vector<int> &num, int low, int high)
{
    while (low < high)
    {
        swap(num[low], num[high]);
    }
}

void rotate(vector<int> &nums, int k)
{
    int n = (int)nums.size();
    //Reverse the whole array
    reverse(nums, 0, n - 1);

    //Now reverse the first k numbers
    reverse(nums, 0, k - 1);

    //Now reverse the remaining elements
    reverse(nums, k, n - 1);
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    int n = nums.size();
    rotate(nums, k);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}