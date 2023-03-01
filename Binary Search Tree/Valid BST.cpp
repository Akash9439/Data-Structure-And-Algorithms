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
    void inorder(TreeNode* root,vector<int> &inorderVector)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left,inorderVector);
        inorderVector.push_back(root->val);
        inorder(root->right,inorderVector);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> inorderVector;
        inorder(root,inorderVector);
        for(int i=0;i<inorderVector.size()-1;i++)
        {
            if(inorderVector[i]>=inorderVector[i+1])
            {
                return false;
            }
        }
        return true;
        // return is_sorted(inorderVector.begin(),inorderVector.end());
    }
};
