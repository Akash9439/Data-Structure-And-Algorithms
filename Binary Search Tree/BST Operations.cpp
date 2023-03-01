#include <bits/stdc++.h>
using namespace std;

class Node {
 public:
    int data;
    Node *left;
    Node *right;

  Node(int d) {
   this->data=d;
   this->left=NULL;
   this->right=NULL;
  }
};

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}
Node* minVal(Node* root)
{
  if(root==NULL)
  {
    return root;
  }
  Node* temp=root;
  while(temp->left!=NULL)
    {
      temp=temp->left;
    }
  return temp;
}
Node* deleteNode(Node* root,int val)
{
  if(root==NULL)
  {
    return root;
  }
  if(root->data==val)
  {
    //0child
    if(root->left==NULL && root->right==NULL)
    {
      delete root;
      return NULL;
    }
    //1child
    if(root->left!=NULL && root->right==NULL)
    {
      Node* temp=root->left;
      delete root;
      return temp;
    }
    if(root->left==NULL && root->right!=NULL)
    {
      Node* temp=root->right;
      delete root;
      return temp;
    }
    //2child
    if(root->left!=NULL && root->right!=NULL)
    {
      int mini=minVal(root->right)->data;
      root->data=mini;
      root->right=deleteNode(root->right,mini);
      return root;
    }
  }
  else
  {
    if(val>root->data)
    {
      root->right=deleteNode(root->right,val);
    }
    else{
      root->left=deleteNode(root->left,val);
    }
  }

}

void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}


Node* insertIntoBST(Node* root,int d){
  if(root==NULL)
  {
    root=new Node(d);
    return root;
  }
  if(d>root->data)
  {
    root->right=insertIntoBST(root->right,d);
  }
  else{
    root->left=insertIntoBST(root->left,d);
  }
  return root;
}

void takeInput(Node* &root){
  int data;
  cin>>data;
  while(data!=-1)
    {
      root=insertIntoBST(root,data);
      cin>>data;
    }
}

int main() {

  Node* root=NULL;
  cout<<"Enter data into the BST"<<endl;
  takeInput(root);
  levelOrderTraversal(root);

  root=deleteNode(root,31);

  return 0;
}
