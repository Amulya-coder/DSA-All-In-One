#include <bits/stdc++.h>

using namespace std;

int LengthOfSubstring(string s)
{

    int i = 0, j = 0;
    int n = s.size();
    unordered_map<char, int> mp;
    int max_len = 0;

    if (n == 1)
    {
        return 1;
    }
    // Time Complexity O(n)
    while (j < n)
    {
        mp[s[j]]++;
        if (mp[s[j]] == 1)
        {
            max_len = max(max_len, j - i + 1);
            j++;
        }
        else
        {
            mp[s[i]]--;
            i++;
        }
    }
}