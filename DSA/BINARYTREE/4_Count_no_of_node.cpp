//for calculating the no of node lefttree+righttree+1
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


int calculate_Node(Node*root){
    if(root==NULL){
    return 0;
    } 
    return (calculate_Node(root->left)+calculate_Node(root->right)+1);
}
int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<calculate_Node(root)<< " ";
    return 0;
}
