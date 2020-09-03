

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
  
    Node *lca(Node *root, int v1,int v2) {
		// Write your code here.
        while(root!=NULL)
        {
            if(root->data > v1 && root->data > v2) 
            root = root->left;
            else if(root->data < v1 && root->data < v2) 
            root = root->right;
            else
            break;
        }
        return root;
    }

