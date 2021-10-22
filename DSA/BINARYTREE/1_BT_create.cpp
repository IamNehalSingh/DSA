#include <bits/stdc++.h>
using namespace std;

struct  Node
{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        val=data;
        left=NULL;
        right=NULL;
    }

};

int main()
{
    struct Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->right->right=new Node(5);
    root->right->right->left=new Node(6);
    return 0;
}



