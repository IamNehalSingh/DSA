#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*right;
    Node*left;

    Node (int val){
        val=data;
        right=NULL;
        left=NULL;
    }
};
Node*insertBSt(Node*root,int val){
    if (root==NULL){
        return new Node(val);

    }
    if (val<root->data){
        root->left=insertBST(root->left,val);

    }
    else
}














void inorder(Node*root){
    if (root==NULL){
        return;

    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
}