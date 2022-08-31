// Link:https://www.hackerearth.com/problem/algorithm/monks-birthday-party/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<string> st;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            st.insert(s);
        }

        for (auto i : st)
        {
            cout << i << endl;
        }
    }
}