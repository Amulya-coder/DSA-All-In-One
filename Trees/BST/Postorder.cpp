#include <bits/stdc++.h>

using namespace std;

//Define the node fields
struct bstnode
{
    int data;
    bstnode *left;
    bstnode *right;
};

//Creating a bst node and return the address
bstnode *getnewNode(int data)
{
    bstnode *newNode = new bstnode();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//Insert a bst node and return the address of new node
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
    {
        //We are setting root as the address of the new Node
        root = getnewNode(data);
    }

    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else
    {
        root->right = insert(root->right, data);
    }

    return root;
}

void postorder(bstnode *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}
int main()
{

    bstnode *rootptr = NULL; //empty tree;

    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 30);

    cout << "Postorder: ";
    postorder(rootptr);

    return 0;
}