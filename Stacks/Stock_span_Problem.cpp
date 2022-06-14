#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> arr = {100, 80, 60, 70, 60, 75, 85};

    int n = arr.size();
    vector<int> ngl;
    ngl.push_back(1);
    stack<int> st;
    st.push(0);
    for (int i = 1; i < n; i++)
    {

        while (!st.empty() and arr[st.top()] <= arr[i])
        {
            st.pop();
        }

        if (!st.empty())
        {
            int len = i - st.top();
            ngl.push_back(len);
        }
        else
        {
            ngl.push_back(i + 1);
        }
        st.push(i);
    }

    for (int i = 0; i < ngl.size(); i++)
    {
        cout << ngl[i] << " ";
    }
}