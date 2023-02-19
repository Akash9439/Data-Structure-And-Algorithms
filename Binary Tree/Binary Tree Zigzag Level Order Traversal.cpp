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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
        {
            return ans;
        }
        bool ltor=true;
        queue<TreeNode *> q;
        q.push(root);
        while(!q.empty())
        {
            
            int size=q.size();
            vector<int> level(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                // if(ltor==true)
                // {
                //     if(temp->left)
                //     {
                //         q.push(temp->left);
                //     }
                //     if(temp->right)
                //     {
                //         q.push(temp->right);
                //     }
                // }
                // else
                // {
                //     if(temp->right)
                //     {
                //         q.push(temp->right);
                //     }
                //     if(temp->left)
                //     {
                //         q.push(temp->left);
                //     }
                // }
                q.pop();
                int index=ltor?i:size-i-1;
                level[index]=temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ltor=!ltor;
            ans.push_back(level);
        }
        return ans;
    }
};
