#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        // Brute force

        // optimised
        int minele = prices[0];
        int profit = 0;
        int maxp = 0;
        int sum = 0;
        int cnt = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            minele = min(prices[i], minele);
            profit = prices[i] - minele;
            maxp = profit;
            minele = prices[i];
            sum += maxp;
            maxp = 0;
        }

        return sum;
    }
};