//preorder  root->left->right    1,2,4,5,3,6,7
//inorder left->root->right      4,2,5,1,6,3,7
//postorder    left->right->root   4,5,2,6,7,3,1

/*           1
        2          3
      4   5     6      7


*/








#include "bits/stdc++.h"
using namespace std;

struct  Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

void preorder(struct Node*root){
    if (root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    struct Node*root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right= new Node(5);
    root->right->left= new Node(7);
    root->right->right->left=new Node(6);
    preorder(root);
    return 0;
}



