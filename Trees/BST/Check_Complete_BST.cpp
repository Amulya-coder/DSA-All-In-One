/*
Given a binary tree, write a function to check whether
the given binary tree is complete binary tree or not.

Given tree : Not a complete binary tree

         1
        / \
        2  3
        /\  \
        4 5  6

Output: The ouput prints whether the tree is complete or not
*/
#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
};

node *getnewNode(int data)
{

    node *newNode = new node();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

int countNodes(node *root)
{
    if (root == NULL)
        return 0;

    return (1 + countNodes(root->left) + countNodes(root->right));
}

bool isComplete(node *root, int index, int totalNodes)
{
    if (root == NULL)
        return true;

    if (index >= totalNodes)
        return false;

    return (isComplete(root->left, 2 * index + 1, totalNodes) and isComplete(root->right, 2 * index + 2, totalNodes));
}

int main()
{

    node *root = NULL;
    root = getnewNode(1);
    root->left = getnewNode(2);
    root->right = getnewNode(3);
    root->left->left = getnewNode(4);
    root->left->right = getnewNode(5);
    root->right->right = getnewNode(6);

    int index = 0;
    int totalNodes = countNodes(root);

    if (isComplete(root, index, totalNodes))
    {
        cout << "Binary tree is complete" << endl;
    }
    else
    {
        cout << "Binary tree is not complete" << endl;
    }

    return 0;
}