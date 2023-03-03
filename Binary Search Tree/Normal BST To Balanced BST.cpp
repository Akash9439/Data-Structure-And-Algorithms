/*************************************************************
    Following is the Binary Serach Tree node structure

    template <typename T>
    class TreeNode
    {
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
            if (left)
                delete left;
            if (right)
                delete right;
        }
    };

*************************************************************/
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
TreeNode<int>* inorderToBST(int s,int e,vector<int> inorderVector)
{
    if(s>e)
    {
        return NULL;
    }
    int mid=(s+e)/2;
    TreeNode<int>* root=new TreeNode<int>(inorderVector[mid]);
    root->left=inorderToBST(s,mid-1,inorderVector);
    root->right=inorderToBST(mid+1,e,inorderVector);
    return root;
}
TreeNode<int>* balancedBst(TreeNode<int>* root) {
    // Write your code here.
    vector<int> inorderVector;
    inorder(root,inorderVector);
    int n=inorderVector.size();

    return inorderToBST(0,n-1,inorderVector);
}
