#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr = {2, 1, 3, 8, 0, -1};

    vector<int> prefix_min;

    prefix_min.push_back(arr[0]);
    int min_ele = INT_MAX;
    for (int i = 1; i < arr.size(); i++)
    {
        min_ele = min(arr[i], prefix_min[i - 1]);
        prefix_min.push_back(min_ele);
    }

    for (int i = 0; i < prefix_min.size(); i++)
    {
        cout << prefix_min[i] << " ";
    }

    return 0;
}