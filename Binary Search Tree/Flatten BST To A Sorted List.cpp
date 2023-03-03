#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
void inorder(TreeNode<int>* root,vector<int> &inorderVector)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,inorderVector);
    inorderVector.push_back(root->data);
    inorder(root->right,inorderVector);
}
TreeNode<int>* flatten(TreeNode<int>* root)
{
    // Write your code here
    vector<int> inorderVector;
    inorder(root,inorderVector);

    // int i=0;
    int n=inorderVector.size();
    // while(i<n-1)
    // {
    //     inorderVector[i]->left=NULL;
    //     inorderVector[i]->right=inorderVector[i+1];
    // }
    // inorderVector[n-1]->left=NULL;
    // inorderVector[n-1]->right=NULL;
    TreeNode<int>* newRoot=new TreeNode<int>(inorderVector[0]);
    TreeNode<int>* curr=newRoot;
    for(int i=1;i<n;i++)
    {
        TreeNode<int>* temp=new TreeNode<int>(inorderVector[i]);
        curr->left=NULL;
        curr->right=temp;
        curr=temp;
    }
    curr->left=NULL;
    curr->right=NULL;
    return newRoot;
}
