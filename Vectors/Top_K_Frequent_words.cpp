#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    static bool sortbydesc(pair<int, string> &a,
                           pair<int, string> &b)
    {
        if (a.first != b.first)
            return a.first > b.first;

        return a.second < b.second;
    }
    vector<string> topKFrequent(vector<string> &words, int k)
    {

        unordered_map<string, int> mp;
        vector<pair<int, string>> v;

        for (int i = 0; i < words.size(); i++)
        {

            mp[words[i]]++;
        }

        for (auto &i : mp)
        {

            v.push_back({i.second, i.first});
        }
        sort(v.begin(), v.end(), sortbydesc);
        vector<string> ans;
        for (int i = 0; i < v.size(); i++)
        {
            if (k)
            {
                ans.push_back(v[i].second);
                k--;
            }
        }

        return ans;
    }
};