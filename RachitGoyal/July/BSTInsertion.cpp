

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

        Node* temp=root;
        Node* pre=NULL;
        Node* newnode= new Node(data);

        if(root==NULL)
        {
            return newnode;
        }
        while(temp!=NULL)
        {
            pre=temp;
            if(data>temp->data)
            {
                temp=temp->right;
            }
            else
            {

                temp=temp->left;
            }
        }

        if(data>pre->data)
        {
            pre->right=newnode;
        }
        else
        {
            pre->left=newnode;
        }


        return root;
    }

