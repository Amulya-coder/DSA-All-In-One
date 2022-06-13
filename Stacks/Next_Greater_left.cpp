// https://www.studymite.com/next-greater-to-left/
#include <bits/stdc++.h>

using namespace std;

int main()
{

    // Using stack
    // Print the immediate next greater element if exists else -1

    // Time complexity: for every element at worst case is both pushed and
    // pop O(2n) = O(n)
    //  vector<int> ngr={4, 5, 2, 25};
    vector<int> ngr = {25, 4, 5, 2};

    stack<int> st;

    int n = ngr.size();

    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++)
    {

        int curr = ngr[i];

        while (!st.empty() and st.top() < curr)
        {
            st.pop();
        }

        if (!st.empty())
        {
            ans[i] = st.top();
        }

        st.push(curr);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}