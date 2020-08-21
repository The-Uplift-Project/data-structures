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
    bool isLeftLeaf(TreeNode* temp)
{
    if(temp == NULL)
        return false;
    if(temp -> left == NULL && temp -> right == NULL)
        return true;
    return false;
}
    
    
    int sumOfLeftLeaves(TreeNode* root) 
{
    int sum = 0;
    if(root!= NULL)
    {
        if(isLeftLeaf(root->left))
            sum += root -> left ->val;
        else
            sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root -> right);
    }
    return sum;
}
    
};