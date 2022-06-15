#include <bits/stdc++.h>

using namespace std;

int main()
{

    const int mod = 1e9 + 7;
    vector<int> arr = {1, 4, 3, 4};
    int n = arr.size();

    vector<long long int> ngl(n, 0);
    vector<long long int> ngr(n, 0);

    stack<int> st;
    stack<int> st1;

    // next greater left

    for (int i = 0; i < n; i++)
    {

        while (!st.empty() and arr[st.top()] <= arr[i])
            st.pop();

        if (!st.empty())
            ngl[i] = st.top();

        st.push(i);
    }

    // next greater right
    for (long long int i = n - 1; i >= 0; i--)
    {

        while (!st1.empty() and arr[st1.top()] <= arr[i])
            st1.pop();

        if (!st1.empty())
            ngr[i] = st1.top();

        st1.push(i);
    }

    // finding the max product
    long long int max_prod = 0;

    for (int i = 0; i < n; i++)
    {
        long long int prod = (ngl[i] * ngr[i]) % mod;

        max_prod = max(max_prod, prod);
    }

    cout << (max_prod) << endl;
    return 0;
}