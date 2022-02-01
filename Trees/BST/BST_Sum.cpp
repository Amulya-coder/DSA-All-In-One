/*
Binary Search Tree - Sum

Create a binary search tree consisting of only positive values & print the sum of nodes of the tree.



Note

An infinite line of integer input representing the nodes of the binary search tree. If any value less than 1 is encountered, the input loop has to break and print the sum of nodes of the tree.



Example

Input

2 3 1 -1

Output

6

Explanation

Sum of the nodes 2+3+1 = 6.

Input format
Read a line of integers.

Output format
Sum of nodes in the tree.

Sample testcases
Input 1
3 2 1 0
Output 1
6
Input 2
2 3 4 5 1 0
Output 2
15

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
    {
        root = getnewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
        root->right = insert(root->right, data);

    return root;
}

int sum(node *root)
{
    if (root == NULL)
        return 0;

    return sum(root->left) + sum(root->right) + root->data;
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

    cout << sum(root) << endl;
}