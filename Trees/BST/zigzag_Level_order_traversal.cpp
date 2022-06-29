// Problem Link: https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/

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
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        queue<TreeNode *> q;
        vector<vector<int>> ans;
        vector<int> v;

        bool flag = false;

        if (root == NULL)
        {
            return ans;
        }
        q.push(root);
        q.push(NULL);
        while (!q.empty())
        {
            TreeNode *t = q.front();
            q.pop();
            if (t == NULL)
            {
                if (flag == false)
                {
                    ans.push_back(v);
                    flag = true;
                }
                else
                {
                    reverse(v.begin(), v.end());
                    ans.push_back(v);
                    flag = false;
                }

                v.clear();
                if (!q.empty())
                    q.push(NULL);
            }
            else
            {
                v.push_back(t->val);
                if (t->left)
                {
                    q.push(t->left);
                }
                if (t->right)
                {
                    q.push(t->right);
                }
            }
        }
        return ans;
    }
};