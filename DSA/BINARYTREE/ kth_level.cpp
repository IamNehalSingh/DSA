#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;

    Node (int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void print_Kth_level(Node*root,int k){
    if (root==NULL)
    {
        return ;
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int level=0;

    while(!q.empty()){
        Node*node=q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==k)
            {
                 cout<<node->data<<"->";
            }
           if(root->left)
                q.push(root->left);
            if(root->right)
                q.push(root->right);
        }
        else if(!q.empty())
            q.push(NULL);
            level++;
    
     }
     
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"data at certain element is "<<endl;
    print_Kth_level(root,2);
    return 0;
    
}
