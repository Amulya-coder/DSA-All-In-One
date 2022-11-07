#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maximum69Number(int num)
    {
        int countrightdig = -1;
        int count = 0;
        bool flag = false;
        int n = num;
        while (n)
        {
            int rem = n % 10;
            if (rem == 6)
            {
                countrightdig = count;
            }
            count++;
            n = n / 10;
        }

        if (countrightdig != -1)
        {
            int ans = num + (3 * pow(10, countrightdig));
            return ans;
        }

        return num;
    }
};