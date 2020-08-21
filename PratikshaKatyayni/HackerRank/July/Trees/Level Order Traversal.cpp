
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

    void levelOrder(Node * root) {
        if(root==NULL)
        return;
        queue<Node *> q;
        q.push(root);
        
        while(!q.empty())
        {
            Node *cur=q.front();
            cout<<cur->data<<" ";
            q.pop();
            if(cur->left)
            {
                q.push(cur->left);
            }
            if(cur->right)
            {
                q.push(cur->right);
            }
        }

    }

