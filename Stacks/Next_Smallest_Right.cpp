// Problem link: https://www.geeksforgeeks.org/next-smaller-element/
#include <bits/stdc++.h>

using namespace std;

// find the immediate next smaller right
// Print the indexes if element exists else -1
int main()
{

    // vector<int> nsr={4, 5, 3, 25};
    vector<int> nsr = {89, 32, 41, 51, 2, 11, 1};

    int n = nsr.size();
    vector<int> ans(n, -1);

    stack<int> st;
    for (int i = n - 1; i >= 0; i--)
    {

        while (!st.empty() and nsr[st.top()] >= nsr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = st.top();
        }

        st.push(i);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}