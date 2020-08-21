#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution
{
public:
    Node *insert(Node *root, int data)
    {
        if (root == NULL)
        {
            return new Node(data);
        }
        else
        {
            Node *cur;
            if (data <= root->data)
            {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else
            {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    void for_left(Node *root)
    {
        if (root->left != NULL)
            for_left(root->left);
        cout << root->data << " ";
    }

    void for_right(Node *root)
    {
        cout << root->data << " ";
        if (root->right != NULL)
            for_right(root->right);
    }

    void topView(Node *root)
    {
        if (root->left != NULL)
            for_left(root->left);
        cout << root->data << " ";
        if (root->right != NULL)
            for_right(root->right);
    }

}; //End of Solution