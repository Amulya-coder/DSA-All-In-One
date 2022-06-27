// Problem link: https://leetcode.com/problems/gas-station/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> gas = {3, 5, 6, 2, 5};
    vector<int> cost = {2, 4, 7, 4, 1};

    // Time Complexity O(N) and space complexity O(1)
    int balance = 0;
    int i = 0;
    int j = 0;
    int n = gas.size();
    int loss = 0;
    int x = 0;
    while (i < n and j < n)
    {

        balance += gas[i] - cost[i];
        if (balance < 0)
        {
            loss += balance;
            balance = 0;
            x = i + 1;
        }
        i++;
        j++;
    }

    if (balance + loss >= 0)
    {
        cout << x;
    }
    else
    {
        cout << "-1" << endl;
    }

    return 0;
}