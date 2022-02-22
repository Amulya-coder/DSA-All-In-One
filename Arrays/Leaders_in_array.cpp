#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n = 7;

    int arr[] = {1, 2, 17, 4, 5, 2, 1};

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    //
    int max = INT_MIN;
    vector<int> v;

    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] >= max)
        {
            max = arr[i];
            v.push_back(arr[i]);
        }
    }

    reverse(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}