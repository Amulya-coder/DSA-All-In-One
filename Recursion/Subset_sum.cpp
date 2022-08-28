#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void solve(vector<int> &arr, int i, int sum, vector<int> &ans)
    {

        // base condition
        if (i == arr.size())
        {
            ans.push_back(sum);
            return;
        }

        // ith elemnt not included
        solve(arr, i + 1, sum, ans);

        // ith element included
        solve(arr, i + 1, sum + arr[i], ans);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        // iterative approach
        vector<int> ans;
        solve(arr, 0, 0, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans)
        {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}