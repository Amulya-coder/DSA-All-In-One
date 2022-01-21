/*
Binary Search Tree - Search

Create a binary search tree consisting of only positive values & search for the element in the tree.

Example

Input

2 3 1 0 2

Output

Yes

Explanation

Search element 2 is present in the tree. Hence the output is "Yes". Otherwise, it must be "No".

Input format
Read a line of integers.

Output format
Yes or No message to be printed.

Sample testcases
Input 1
2 3 1 0 2
Output 1
Yes
Input 2
2 3 1 0 4
Output 2
No
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
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}

bool search(node *root, int key)
{
    if (root == NULL)
    {
        return false;
    }
    else if (root->data == key)
        return true;

    else if (key < root->data)
        return search(root->left, key);

    else
    {
        return search(root->right, key);
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
    int key;
    cin >> key;
    if (search(root, key))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
