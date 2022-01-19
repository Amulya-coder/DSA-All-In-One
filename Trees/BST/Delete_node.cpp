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

bstnode *minvalue(bstnode *root)
{
    //In right part of the tree we find out the min node in the depth of left
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

//Delete a node
bstnode *del(bstnode *root, int item)
{

    bstnode *t;
    if (root == NULL)
    {
        cout << "Tree is Empty";
        return NULL;
    }
    else if (item < root->data) //to search in left part
    {
        root->left = del(root->left, item);
    }
    else if (item > root->data) //to search in right part
    {
        root->right = del(root->right, item);
    }

    else //Woohoo...exact node, Get ready to be Deleted
    {
        if (root->left == NULL and root->right == NULL) //case1: leaf node
        {
            return NULL;
        }
        else if (root->left == NULL) //case2: node having one child, its right child
            root = root->right;

        else if (root->right == NULL) //case2: node having one child, its left child
            root = root->left;

        else
        //case3: node with Two child
        //In short: find the min in right subtree copy the value in targeted value and delete the duplicate from right 	//subtree
        {
            t = minvalue(root->right);
            root->data = t->data;
            root->right = del(root->right, t->data);
        }
    }
    return root;
}

void inorder(bstnode *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main()
{

    bstnode *rootptr = NULL; //empty tree;

    rootptr = insert(rootptr, 10);
    rootptr = insert(rootptr, 20);
    rootptr = insert(rootptr, 8);
    rootptr = insert(rootptr, 30);
    del(rootptr, 10);
    inorder(rootptr);

    return 0;
}
