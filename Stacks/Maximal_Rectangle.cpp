// Problem link: https://leetcode.com/problems/maximal-rectangle/
#include <bits/stdc++.h>

using namespace std;

void largestRectangle(vector<int> &arr)
{

    int n = arr.size();
    vector<int> nsl(n, -1);
    vector<int> nsr(n, -1);

    stack<int> st;
    stack<int> st2;

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

    // next smallest right
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st2.empty() and arr[st2.top()] >= arr[i])
        {
            st2.pop();
        }

        if (!st2.empty())
        {
            nsr[i] = st2.top();
        }
        st2.push(i);
    }

    // find the largest rectangle area
    int area = 0;
    int wl = 0;
    int wr = 0;

    for (int i = 0; i < n; i++)
    {

        if (nsl[i] == -1)
        {
            wl = i;
        }
        else
            wl = i - nsl[i] - 1;

        if (nsr[i] == -1)
        {
            wr = n - i - 1;
        }
        else
            wr = nsr[i] - i - 1;

        area = max(area, (wl + wr + 1) * arr[i]);
        cout << area << endl;
    }

    // return area;
}

int main()
{

    vector<vector<char>> arr = {{'1', '0', '1', '0', '0'},
                                {'1', '0', '1', '1', '1'},
                                {'1', '1', '1', '1', '1'},
                                {'1', '0', '0', '1', '0'}};

    int n = arr.size();
    int m = arr[0].size();
    vector<int> heights(n, 0);
    int area = 0;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == '1')
            {
                heights[j]++;
            }
            else
            {
                heights[j] = 0;
            }
        }
        // area=max(area,largestRectangle(heights));
        largestRectangle(heights);
    }

    // cout<<area<<endl;

    return 0;
}