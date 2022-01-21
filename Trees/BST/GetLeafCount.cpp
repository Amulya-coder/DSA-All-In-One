/*
Write a program to count total number of leaf nodes in a binary search tree.

Input format
First line contains an integer, n denoting the number of nodes in a tree.

Each of the n subsequent lines contains an integer,data, denoting the value of an element that must be added to the BST.

Output format
Prints the total count of leaf nodes.

Sample testcases
Input 1
7
5 3 8 1 4 7 10
Output 1
*/
#include <bits/stdc++.h>

using namespace std;

struct bstnode
{
    int data;
    bstnode *left;
    bstnode *right;
};

bstnode *getnewNode(int data)
{
    bstnode *newNode = new bstnode();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
    {
        root = getnewNode(data);
    }

    else if (data < root->data)
        root->left = insert(root->left, data);

    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

int getLeafcount(bstnode *root)
{
    if (root == NULL)
        return 0;

    else if (root->left == NULL and root->right == NULL)
        return 1;

    else
        return getLeafcount(root->left) + getLeafcount(root->right);
}
int main()
{

    int n;
    cin >> n;

    bstnode *root = NULL;
    int data;
    cin >> data;
    root = insert(root, data);
    for (int i = 2; i <= n; i++)
    {
        insert(root, data);
    }
    cout << getLeafcount(root) << endl;
    return 0;
}