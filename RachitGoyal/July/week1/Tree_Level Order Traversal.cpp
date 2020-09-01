

        void levelOrder(Node* root)
        {
            if(root==NULL)
            {
                return;
            }
            queue<Node* >qe;
            qe.push(root);
            while(!qe.empty())
            {
                Node* temp=qe.front();
                cout<<temp->data<<" ";
                qe.pop();
                if(temp->left)
                {
                    qe.push(temp->left);
                }
                if(temp->right)
                {
                    qe.push(temp->right);
                }
            }
        }

