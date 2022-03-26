#include <bits/stdc++.h>

using namespace std;

int gridWays(int i, int j, int m, int n)
{

    // corner condtion if we move out of the borders
    if (i >= m or j >= n)
    {
        return 0;
    }

    if (i == m - 1 and j == n - 1)
    {
        return 1;
    }

    // i+1 moving in right direction and j+1 moving in downward direction and adding
    //  to find the total number of ways
    int ans = gridWays(i + 1, j, m, n) + gridWays(i, j + 1, m, n);

    return ans;
}

int main()
{

    int m, n;
    cin >> m >> n;

    cout << gridWays(0, 0, m, n) << endl;
}