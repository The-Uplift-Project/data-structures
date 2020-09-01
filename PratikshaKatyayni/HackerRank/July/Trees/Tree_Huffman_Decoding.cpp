

/* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/


void decode_huff(node * root, string s) {
    string ans="";
    node * cur=root;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        cur=cur->left;
        else
        cur=cur->right;
        if (cur->left==NULL && cur->right==NULL) 
        { 
            ans += cur->data; 
            cur = root; 
        } 
    }
    cout<<ans<<endl;
}

