#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> duplicates(int arr[], int n)
    {

        int max = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        vector<int> repeat(max + 1, 0);
        vector<int> ans;

        int flag = 0;
        for (int i = 0; i < n; i++)
        {

            if (repeat[arr[i]] == 0)
            {
                repeat[arr[i]] = 1;
                flag = 1;
            }

            else
            {
                if (flag == 1)
                {
                    ans.push_back(arr[i]);
                    flag = 0;
                }
            }
        }

        if (ans.empty())
        {
            ans.push_back(-1);
            return ans;
        }

        return ans;

        // Another simple solution using set(set is used to store unique elements)
        /*
        sort(arr, arr + n);
        set<int> s;

        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                s.insert(arr[i]);
            }
        }

        if (s.empty())
        {
            s.insert(-1);
        }

        vector<int> v(s.begin(), s.end());

        return v;
        */
    }
};

int main()
{
    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans)
            cout << i << ' ';
        cout << endl;
    }
    return 0;
}