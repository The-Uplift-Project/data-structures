/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<TreeNode*> construct(vector<int> nodes)
    {
        TreeNode*root=NULL;
        vector<TreeNode*> temp;
        vector<TreeNode*> lefttree;
        vector<TreeNode*> righttree;
        if(nodes.size()==1)
        {
            root=new TreeNode();		
            root->val=nodes[0];
            root->left=NULL;
            root->right=NULL;
            temp.push_back(root);
            return temp;
        }
        for(int i=0;i<nodes.size();i++)
        {
            if(i==0)
            lefttree.push_back(NULL);
            else
            {
                vector<int> left_part;
                for(int j=0;j<i;j++)
                {
                    left_part.push_back(nodes[j]);
                }
                lefttree=construct(left_part);
            }
            if(i==nodes.size()-1)
            righttree.push_back(NULL);
            else
            {
                vector<int> right_part;
                for(int j=i+1;j<=nodes.size()-1;j++)
                {
                    right_part.push_back(nodes[j]);
                }
                righttree=construct(right_part);
            } 
            for(int j=0;j<lefttree.size();j++)
            {
                for(int k=0;k<righttree.size();k++)
                {
                    root=new TreeNode();
                    root->val=nodes[i];
                    root->left=lefttree[j];
                    root->right=righttree[k];
                    temp.push_back(root);		
                }
            }
            lefttree.clear();
            righttree.clear();
        }
	    return temp;
    }
    
    vector<TreeNode*> generateTrees(int n) 
    {
        vector<int> nodes;
        for(int i=1;i<=n;i++)
        {
            nodes.push_back(i);
        }
        vector<TreeNode*> result=construct(nodes);
        return result;
    }
};
