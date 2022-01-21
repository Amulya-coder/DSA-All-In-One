// Preorder
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
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
}
void preorder(bstnode *root)
{
    if (root != NULL)
    {
        cout << root->data << "  ";
        preorder(root->left);
        preorder(root->right);
    }
    return;
}
int main()
{
    int n;
    cin >> n;

    bstnode *root = NULL;
    int data;
    for (int i = 1; i <= n; i++)
    {
        cin >> data;
        root = insert(root, data);
    }
    cout << "PREORDER = ";
    preorder(root);
}
