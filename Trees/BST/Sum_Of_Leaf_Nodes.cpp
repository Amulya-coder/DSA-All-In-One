/*
Binary Search Tree - Sum of leaf nodes

Create a binary search tree consisting of only positive values & print the sum of leaf nodes in the tree.



Note

An infinite line of integer input representing the nodes of the binary search tree. If any value less than 1 is encountered, the input loop has to break and print the sum of leaf nodes in the tree.



Example

Input

2 3 1 -1

Output

4

Explanation

2 is the root and 3 and 1 are the children of 2. So the sum of leaf nodes is 3+1 = 4.

Input format
Read a line of integers.

Output format
Sum of leaf nodes in the tree.

Sample testcases
Input 1
2 3 1 0
Output 1
4
Input 2
4 2 6 1 3 5 7 -9
Output 2
16
*/

#include <bits/stdc++.h>

using namespace std;

int sumofleaf = 0;

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

node *insert(node *root, int data)
{
    if (root == NULL)
    {
        root = getnewNode(data);
    }

    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }

    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

int sumofleafNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }

    else if (root->left == NULL and root->right == NULL)
        sumofleaf = sumofleaf + root->data;

    sumofleafNodes(root->left);
    sumofleafNodes(root->right);

    return sumofleaf;
}

int main()
{
    node *root = NULL;

    while (true)
    {
        int data;
        cin >> data;

        if (data < 1)
            break;

        root = insert(root, data);
    }

    cout << sumofleafNodes(root) << endl;
    return 0;
}