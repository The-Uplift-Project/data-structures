

/* you only have to complete the function given below.  
Node is defined as  

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



    Node * insert(Node * root, int data) {
        Node *cur=root;
        Node *prev=NULL;
        Node *temp=new Node(data);
        if(root==NULL)
        return temp;
        while(cur!=NULL)
        {
            prev=cur;
            if(data>cur->data)
            {
                cur=cur->right;
            }
            else
            cur=cur->left;
        }
        if(data>prev->data)
        prev->right=temp;
        else
        prev->left=temp;
        return root;
    }

