//Bst creation which has atmost 2 child node
//root node,parent node,child node,leafnode,internal,degree
//Rule 1-the left sub tree of a node contains only nodes with keys lesser than the node keys;
//rule 2-    right  
//the left and right subtree each must be a bst there should no any dublicates.                                                greater                  

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;//subnode<nodes
    Node*right;//subnode>nodes
//constructor
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;

    }
};

//insert 
//return value will be node pointer,node*root which is already crated
//int value with the help of this one we will create the new  node that will be inserted

Node* insertBST(Node*root,int val){
    if(root==NULL)
    {
        return new Node(val);
    }

    if (val<root->data)
    {
        root->left = insertBST(root->left,val);
    }
    //val>root->data)
    else
    {   
        root->right=insertBST(root->right,val);
    }
    return root;

}
void inorder(Node*root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"   ";
    inorder(root->right);
}
int main(){
    Node*root=NULL;
    root=insertBST(root,5);

    insertBST(root,1);
    insertBST(root,2);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,6);
    insertBST(root,7);
    insertBST(root,10);
    insertBST(root,13);

    inorder(root);
    cout<<endl;
     return 0;
}



