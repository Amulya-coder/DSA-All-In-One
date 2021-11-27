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
    //To 1st part of the array
    reverse(nums, 0, n - k - 1);

    //To second part of the array
    reverse(nums, n - k, n - 1);

    //Now reverse the whole array
    reverse(nums, 0, n - 1);
}

int main()
{

    return 0;
}