#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//templet of bst
struct Node{
    int data;
    Node*left;
    Node*right;
//creation of a new node
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

Node* search(Node*root,int key){
    if (root==NULL){
        return NULL;
    }
    if (root->data==key)
    {
        return root;
    }
    if(root->data>key){
        return search(root->left,key);
    }
    //root->data<key
    else {
        return search(root->right,key);
    }
    // else(root->data!=item){
    //     cout<<"key value not found";
    // }


}
int main(){
    Node*root=new Node(4);
    root->left=new Node(5);
    root->right=new Node(6);
    root->left->left=new Node(7);
    root->right->right=new Node(10);

    if (search(root,20)==NULL){
        cout<<"value doenot exists";
    }else{
        cout<<"value Exists";
    }

     return 0;
}
