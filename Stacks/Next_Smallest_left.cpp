#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> nsl = {89, 32, 41, 51, 2, 11, 1};
    stack<int> st;

    int n = nsl.size();
    vector<int> ans(n, -1);
    for (int i = 0; i < n; i++)
    {

        while (!st.empty() and nsl[st.top()] >= nsl[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = st.top();
        }

        st.push(i);
    }

    for (auto itr : ans)
    {
        cout << itr << " ";
    }

    return 0;
}