#include <bits/stdc++.h>

using namespace std;

vector<int> diagonal_sum(vector<vector<int>> &arr, int n)
{

    vector<int> ans;
    int m = arr[0].size();
    for (int i = 0; i < n; i++)
    {
        int r = i, c = 0;
        int sum = 0;
        while (r >= 0 and c < m)
        {
            sum += arr[r][c];
            r--;
            c++;
        }
        ans.push_back(sum);
    }

    int i = n - 1;
    int c = i - 1;
    while (c < m)
    {
        int row = i;
        int col = c;
        int sum = 0;
        while (row >= 0 and col < m)
        {
            sum += arr[row][col];
            row--;
            col++;
        }
        ans.push_back(sum);
        c++;
    }

    return ans;
}

int main()
{
    // cout<<"Hello World";

    vector<vector<int>> v = {{10, 30, 89, 40}, {50, 60, 30, 80}, {1, 2, 3, 4}};

    int n = 3;
    int m = 4;

    vector<int> ans = diagonal_sum(v, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}
