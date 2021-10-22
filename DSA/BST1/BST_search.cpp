#include<bits/stdc++.h>
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
Node* insertBST(Node*root,int val)
{
    if (root==NULL){
        return new Node(val);
    }

    if (val<root->data)
    {
        root->left=insertBST(root->left,val);
    }
    else
    {
        root->right=insertBST(root->right,val);
    }
    return root;


}

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

void inorder(Node*root){
    if (root==NULL)
    return ;

    inorder(root->right);
    cout<<root->data<<" ";
    inorder(root->left);

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
    if (search(root,20)==NULL){
        cout<<"value doenot exists";
    }
    else{
        cout<<"value Exists";
    }

     return 0;
}

