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
    bool flag = true;
    vector<int> dfs(TreeNode * root)
    {
       if(!root) return {}; 
       vector<int> left = dfs(root -> left); 
       vector<int> right = dfs(root -> right);
       vector<int> merge;
       for(int i = 0 ; i < left.size();i++)
       {
           if(left[i] >= root-> val) flag = false; 
           merge.push_back(left[i]);
           
        }
       for(int i = 0 ; i < right.size();i++)
       {
           if(right[i] <= root -> val) flag = false;
           merge.push_back(right[i]); 
        }
       merge.push_back(root -> val); 
       return merge; 
    }
    bool isValidBST(TreeNode* root) {
        dfs(root);
        return flag;
    }
};
