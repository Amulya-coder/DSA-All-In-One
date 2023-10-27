#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    vector<int> successfulPairs(vector<int> &spells, vector<int> &potions, long long success)
    {

        int i = 0, j = 0;
        vector<int> arr;
        if (potions.size() == 1)
        {
            int cnt = 0;
            while (i < spells.size())
            {
                long long product = (long)spells[i] * potions[j];
                if (product >= success)
                {
                    cnt++;
                }
                i++;
                arr.push_back(cnt);
                cnt = 0;
            }
        }
        else
        {
            sort(potions.begin(), potions.end());
            while (i < spells.size())
            {
                int low = 0;
                int high = potions.size();
                int ans = -1;
                while (low <= high)
                {
                    int mid = (high - low) / 2 + low;
                    long long int product = (long)potions[mid] * spells[i];
                    if (product >= success)
                    {
                        ans = mid;
                        high = mid - 1;
                    }
                    else
                    {
                        low = mid + 1;
                    }
                }
                cout << "ans: " << ans << " ";
                if (ans != -1)
                    arr.push_back(potions.size() - ans);
                else
                    arr.push_back(0);
                i++;
            }
        }

        return arr;
    }
};
