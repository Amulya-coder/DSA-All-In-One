/*
Binary Search Tree - Height

Create a binary search tree consisting of only positive values & print the height of the tree.

Example

Input

2 3 1 0

Output

2

Explanation

This BST has 2 levels in it. 2 is the root and 3 and 1 are the right and left child respectively. Hence the height is 2.

Input format
Read a line of integers.

Output format
Print the height of the tree.

Sample testcases
Input 1
2 3 1 0 
Output 1
2
Input 2
2 3 1 4 0
Output 2
3
*/

// You are using GCC
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

node *insert(node *root, int data)
{
    if (root == NULL)
        root = getnewNode(data);

    else if (data < root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

int findheight(node *root)
{

    if (root == NULL)
        return 0;

    else
    {
        int leftheight = findheight(root->left);
        int rightheight = findheight(root->right);
        return max(leftheight, rightheight) + 1;
    }
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

    cout << findheight(root) << endl;
}