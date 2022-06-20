#include <bits/stdc++.h>

using namespace std;

int main()
{

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
    }