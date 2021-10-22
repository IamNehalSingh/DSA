#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};
void preorder(Node*root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);

}
void inorder(Node*root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}

void postorder(Node*root)
{
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}





int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"preordere sequence is :" ;
    preorder(root);
    cout<<endl;
    cout<<"inorder sequence is: " ;
    inorder(root);
    cout<<endl;
    cout<<"postorder sequence is :" ;
    postorder(root);
    return 0;
}
/*
               1
            2       3
          4    5  6    7

preordere sequence is :1->2->4->5->3->6->7->
inorder sequence is: 4->2->5->1->6->3->7->
postorder sequence is :4->5->2->6->7->3->1->
            
*/