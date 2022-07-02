// Problem link : https : // leetcode.com/problems/minimum-absolute-difference-in-bst
#include <bits/stdc++.h>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    void solve(TreeNode *t, vector<int> &v)
    {

        if (t == NULL)
        {
            return;
        }

        solve(t->left, v);
        v.push_back(t->val);
        solve(t->right, v);
    }

    int getMinimumDifference(TreeNode *root)
    {

        if (root == NULL)
        {
            return 0;
        }
        vector<int> v;
        solve(root, v);
        int diff = INT_MAX;
        for (int i = 1; i < v.size(); i++)
        {
            diff = min(diff, v[i] - v[i - 1]);
        }

        return diff;
    }
};