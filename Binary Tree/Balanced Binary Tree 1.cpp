/*Given a binary tree, determine if it is height-balanced.

For this problem, a height-balanced binary tree is defined as:

a binary tree in which the left and right subtrees of every node differ in height by no more than 1.

 

Example 1:


Input: root = [3,9,20,null,null,15,7]
Output: true
Example 2:


Input: root = [1,2,2,3,3,null,null,4,4]
Output: false
Example 3:

Input: root = []
Output: true
 */
class Solution {
public:
    int maxHeight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int lh=maxHeight(root->left);
        int rh=maxHeight(root->right);
        
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) 
    {
        if(root==NULL)
        {
            return true;
        }
        int l=maxHeight(root->left);
        int r=maxHeight(root->right);
        if(abs(r-l)>1)
        {
            return false;
        }
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        if(!left || !right)
        {
            return false;
        }
        return true;
    }
};
