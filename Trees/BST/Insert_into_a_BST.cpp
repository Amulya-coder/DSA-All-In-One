// Problem link:https://leetcode.com/problems/insert-into-a-binary-search-tree/
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
    void insert(TreeNode *t, int val)
    {

        if (val > t->val)
        {
            if (t->right)
            {
                insert(t->right, val);
            }
            else
            {
                t->right = new TreeNode(val);
            }
        }

        else
        {
            if (t->left)
            {
                insert(t->left, val);
            }
            else
            {
                t->left = new TreeNode(val);
            }
        }
    }
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {

        if (root == NULL)
        {
            return new TreeNode(val);
        }
        // Iterative soln
        insert(root, val);
        return root;
        /*
        Recursive soln
        if(root==NULL){
        return new TreeNode(val);
        }
        if(val>root->val){

             root->right = insertIntoBST(root->right,val);
             return root;
            }
        else{
            root->left= insertIntoBST(root->left,val);
            return root;
        }
        */
    }
};