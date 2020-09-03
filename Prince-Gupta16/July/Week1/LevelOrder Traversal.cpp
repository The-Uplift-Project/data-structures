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
    /*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node *root)
    {

        //Creating Queue
        queue<Node *> q;
        Node *n = root;

        while (n != NULL)
        {
            cout << n->data << ' ';

            if (n->left != NULL)
                q.push(n->left);
            if (n->right != NULL)
                q.push(n->right);
            if (!q.empty())
            {
                n = q.front();
                q.pop();
            }
            else
            {
                n = NULL;
            }
        }
    }

}; //End of Solution