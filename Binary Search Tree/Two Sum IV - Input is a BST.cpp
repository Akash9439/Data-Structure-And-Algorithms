#include <bits/stdc++.h> 
// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
***************/
void inorder(BinaryTreeNode<int>* root, vector<int> &inorderVector)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left,inorderVector);
    inorderVector.push_back(root->data);
    inorder(root->right,inorderVector);
}
bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorderVector;
    inorder(root,inorderVector);
    int sum=0;
    int i=0;
    int j=inorderVector.size()-1;
    while(i<j)
    {
        sum=inorderVector[i]+inorderVector[j];
        if(sum==target)
        {
            return true;
        }
        else if(sum>target)
        {
            j--;
        }
        else if(sum<target)
        {
            i++;
        }
    }
    return false;
}
