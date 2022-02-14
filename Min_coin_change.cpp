#include <bits/stdc++.h>

using namespace std;

// Through Recursion
int minCoins(int arr[], int n, int amount)
{
    if (amount == 0)
    {
        return 0;
    }

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (amount - arr[i] >= 0)
        {
            int smallerAns = minCoins(arr, n, amount - arr[i]);
            if (smallerAns != INT_MAX)
            {
                ans = min(ans, smallerAns + 1);
            }
        }
    }

    return ans;
}

int main()
{

    int arr[] = {1, 2, 5, 10, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int amount = 29;
    cout << minCoins(arr, n, amount) << endl;

    return 0;
}
