// Problem Link: https://github.com/users/Amulya-coder/achievements/pull-shark
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr = {1, 1};

    int n = arr.size();
    vector<int> nsr(n, -1);
    vector<int> nsl(n, -1);

    stack<int> st;

    // next smallest right
    for (int i = n - 1; i >= 0; i--)
    {

        while (!st.empty() and arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            nsr[i] = st.top();
        }

        st.push(i);
    }

    // next smallest left
    for (int i = 0; i < n; i++)
    {

        while (!st.empty() and arr[st.top()] >= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            nsl[i] = st.top();
        }

        st.push(i);
    }

    int ans = INT_MIN;
    int wl = 0;
    int wr = 0;

    for (int i = 0; i < n; i++)
    {

        // width of left
        if (nsl[i] == -1)
        {
            wl = i;
        }

        else
            wl = i - nsl[i] - 1;

        // width of right
        if (nsr[i] == -1)
            wr = n - i - 1;

        else
            wr = nsr[i] - i - 1;

        // max of area
        ans = max(ans, (wl + wr + 1) * arr[i]);
    }

    cout << ans << endl;

    return 0;
}