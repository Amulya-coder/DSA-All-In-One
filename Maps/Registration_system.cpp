// link: https://codeforces.com/problemset/problem/4/C
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;

    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    unordered_map<string, int> mp;
    for (int i = 0; i < v.size(); i++)
    {
        if (mp[v[i]] == 0)
        {
            cout << "OK" << endl;
        }

        else
        {
            cout << v[i] << mp[v[i]] << endl;
        }
        mp[v[i]]++;
    }

    return 0;
}
