#include<bits/stdc++.h>
#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*right;
    Node*left;

    Node(int val){
        val=data;
        right=NULL;
        left=NULL;
    }
};


Node*insertBST(Node*root,int val){
    if (root==NULL){
        return new Node(val);
    }
    if (val<root->data)
    {
        root->left=insertBST(root->left,val);
    }else{
        root->right=insertBST(root->right,val);
    }
    return root;
}


Node*Minmum(Node*root){
    Node*current=root;
    while(current && current->left!=NULL){
        current=current->left;
    }
    return current;
}


Node* deleteInBST(Node*root,int key)
{
    if (key<root->data){                //search where u have to delete first left or right
         root->left=deleteInBST(root->left,key);
        
    }
    else if(key>root->data){
        root->right=deleteInBST(root->right,key);
    }

    else{
        if (root->left==NULL){
             Node*temp=root->right;
             free(temp);
             return temp;

        }
        else if (root->right==NULL){
            Node*temp=root->right;
            free(temp);
            return temp;
        }
        Node*temp=Minmum(root->right);//sucessor
        root->data=temp->data;
        root->right=deleteInBST(root->right, temp->key);
    }
    return root;

}
void inorder(Node*root){
    if (root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
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
    insertBST(root,8);
    insertBST(root,9);

    inorder(root);
    cout<<endl;
     return 0;
}

