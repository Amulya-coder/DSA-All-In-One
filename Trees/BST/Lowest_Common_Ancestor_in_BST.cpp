#include <bits/stdc++.h>

using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {

        int a = root->val, b = p->val, c = q->val;

        if (a > b and a > c)
            return lowestCommonAncestor(root->left, p, q);

        if (a < b and a < c)
            return lowestCommonAncestor(root->right, p, q);

        return root;
    }
};