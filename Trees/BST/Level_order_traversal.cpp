#include <bits/stdc++.h>

using namespace std;

struct bstnode
{
    int data;
    bstnode *left;
    bstnode *right;
};

//Function to print nodes in binary tree in level order
void levelOrder(bstnode *root)
{
    if (root == NULL)
        return;

    else
    {
        queue<bstnode *> Q;
        Q.push(root);
        //while there is at least one discovered node
        while (!Q.empty())
        {
            int nodecount = Q.size();
            while (nodecount > 0)
            {
                bstnode *current = Q.front();
                cout << current->data << " ";
                Q.pop(); //removing the element at front
                if (current->left != NULL)
                    Q.push(current->left);
                if (current->right != NULL)
                    Q.push(current->right);
                nodecount--;
            }
            cout << endl;
        }
    }
}

bstnode *getnewNode(int data)
{
    bstnode *newNode = new bstnode();

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

//Function to insert the node in a Binary search tree
bstnode *insert(bstnode *root, int data)
{
    if (root == NULL)
    {
        root = getnewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }

    return root;
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
        cin >> data;
        insert(root, data);
    }
    levelOrder(root);
}