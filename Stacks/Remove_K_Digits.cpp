// Problem link: https://leetcode.com/problems/remove-k-digits/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s = "1432219";
    int k = 3;

    string res = "";
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {

        // next smallest to left
        while (!st.empty() and st.top() > s[i] and k > 0)
        {

            st.pop();
            k--;
        }

        st.push(s[i]);

        // for popping preeceding zeros
        if (s[i] == '0' and st.size() == 1)
        {
            st.pop();
        }
    }

    while (k and !st.empty())
    {
        st.pop(); // for cases like 456 where every s[i]>st.top()
        k--;
    }

    while (!st.empty())
    {
        res.push_back(st.top());
        st.pop();
    }

    reverse(res.begin(), res.end());

    // if string is empty print 0
    if (res.length() == 0)
    {
        cout << 0 << endl;
    }

    for (int i = 0; i < res.length(); i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}