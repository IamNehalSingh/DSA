//for calculating the sum of node root->left + root->right + root->data
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


int Sum_Node(Node*root){
    if(root==NULL){
    return 0;
    } 
    return (Sum_Node(root->left)+Sum_Node(root->right)+root->data);
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<Sum_Node(root)<< " ";
    return 0;
}
