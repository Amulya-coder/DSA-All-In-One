#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;
    vector<int> v;

    // Brute force O(n^2)
    for (int i = 0; i <= n - k; i++)
    {
        bool flag = false;
        int j = i + k - 1;
        int m = i;
        while (m <= j)
        {
            if (a[m] < 0)
            {
                v.push_back(a[m]);
                flag = true;
                break;
            }
            m++;
        }
        if (flag == false)
            v.push_back(0);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}