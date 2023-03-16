#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        int mine = prices[0], res = 0;
        for (int i = 0; i < prices.size(); i++)
        {
            if (res < prices[i] - mine)
            {
                res = prices[i] - mine;
            }
            if (mine > prices[i])
            {
                mine = prices[i];
            }
        }
        return res;
    }
};