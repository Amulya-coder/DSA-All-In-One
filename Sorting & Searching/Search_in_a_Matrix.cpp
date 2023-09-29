#include <bits/stdc++.h>

using namespace std;

int matSearch(vector<vector<int>> &arr, int N, int M, int x)
{
    // your code here
    int r = 0;
    int c = M - 1;

    while (r <= N - 1 and c >= 0)
    {
        if (arr[r][c] == x)
        {
            return 1;
        }
        else if (arr[r][c] > x)
        {
            c--;
        }
        else if (arr[r][c] < x)
        {
            r++;
        }
    }

    return 0;
}