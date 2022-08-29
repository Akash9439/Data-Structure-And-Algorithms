class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;
        vector<int> inorder;
        TreeNode *node=root;
        while(true)
        {
            if(node!=NULL)
            {
               s.push(node);
               node=node->left;
            }
            else if(node==NULL)
            {
                if(s.empty()==true)
                {
                    break;
                }
                node=s.top();
                s.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
        }
        return inorder;
    }
};
