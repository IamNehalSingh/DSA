//calculating the maximum distace between two nodes 
//max(leftheight+right+1,leftDiameter,RightDiameter)

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
int calHeight(Node*root){
     if(root==NULL){
        return 0;
    }
    int lheight=calHeight(root->left);
    int rheight=calHeight(root->right);
    return max(lheight,rheight)+1;
}

int calDiameter(Node*root){
    if(root==NULL){
        return 0;
    }
    //first case throgh root

    int lheight=calHeight(root->left);
    int rheight=calHeight(root->right);
    int currDiameter=lheight+rheight+1;

//second case withot root
    int lDiameter=calDiameter(root->left);
    int rDiameter=calDiameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));
}

int main(){
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<calDiameter(root)<< " ";
    return 0;
}




