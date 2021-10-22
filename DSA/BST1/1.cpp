#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*right;
    Node*left;

    Node(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

Node* insertBST(Node*root,int val){
    if (root==NULL){

        return new Node(val);
    }

    if (val < root->data){

        root->left = insertBST(root->left,val);

        }
    else{

        root->right= insertBST(root->right,val);
    }
    return root;
}

Node* deleteBST(Node*root,int key){

    if (key < root->data){
        rooot->left=deleteBST(root->left,key);
    }
    else if{
        root->right=deleteBST(root->right,key);
    }
    else{
        if(root->left==NULL)
        {
            Node*temp=root->right;
            delete(root);
            return temp;
        }
    }else if{
        if (root->right==NULL){
            Node*temp=root->left;
            delete(root);
            return temp;
        }
    }

    


}












void inorder(Node*root){
    if(root==NULL{
        return ;
    }
    inorder(root->left);
    cout<<root->data;
    inorder(root->right);
    }