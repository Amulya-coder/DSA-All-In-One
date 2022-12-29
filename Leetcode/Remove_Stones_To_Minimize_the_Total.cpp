#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minStoneSum(vector<int> &piles, int k)
    {

        int arr[10001] = {0};
        for (auto &it : piles)
        {
            arr[it]++;
        }
        int s = 0;
        for (int i = 10000; i > 0; i--)
        {
            while (arr[i]-- > 0)
            {
                if (k-- > 0)
                {
                    int p = i - (int)floor(i / 2);
                    arr[p]++;
                }
                else
                    s += i;
            }
        }
        return s;
    }
};