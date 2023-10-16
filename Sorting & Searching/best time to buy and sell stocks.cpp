#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int max_profit = 0;
        int n = prices.size();
        int i = 0, j = i + 1;
        while (i < n - 1)
        {
            if (prices[j] > prices[i])
            {
                max_profit = max(max_profit, prices[j] - prices[i]);
            }
            j++;
            if (j == n)
            {
                i = i + 1;
                j = i + 1;
            }
        }
        return max_profit;
    }
};