// Problem Link: https://leetcode.com/problems/symmetric-tree/

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
    bool checkSymmetric(TreeNode *p, TreeNode *q)
    {

        if (p == NULL and q == NULL)
        {
            return true;
        }

        if (p && q)
        {
            if (p->val != q->val)
            {
                return false;
            }
            return (checkSymmetric(p->left, q->right) && checkSymmetric(p->right, q->left));
        }

        return false;
    }

    bool isSymmetric(TreeNode *root)
    {

        if (root == NULL)
            return true;

        return checkSymmetric(root->left, root->right);
    }
};