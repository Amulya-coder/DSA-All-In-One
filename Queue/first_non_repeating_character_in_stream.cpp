#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    // More optimised
    // T.C. O(n) and S.C O(26) ~ O(1) (taking map of 26 letters)
    // not using queue
    unordered_map<int, int> mp;
    string ans = "";
    int pointer = 0;
    int index = 0;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i] - 'a']++;

        while (pointer <= index and mp[s[i] - 'a'] > 1)
        {
            pointer++;
        }
        if (pointer > index)
        {
            ans += '#';
        }
        else
        {
            ans += s[pointer];
        }
        index++;
    }

    for (int i = 0; i < ans.length(); i++)
    {
        cout << ans[i];
    }

    // Time Complexity O(n) and Space Complexity O(n)
    /*
    string s;
    cin >> s;

    queue<char> qu;
    vector<int> cnt(26, 0);
    for (int i = 0; i < s.length(); i++)
    {
        qu.push(s[i]);
        cnt[s[i] - 'a']++;
        while (!qu.empty())
        {

            if (cnt[qu.front() - 'a'] == 1)
            {
                cout << qu.front();
                break;
            }
            else
            {
                qu.pop();
            }
        }
        if (qu.empty())
        {
            cout << "#";
        }
        */
    return 0;
}