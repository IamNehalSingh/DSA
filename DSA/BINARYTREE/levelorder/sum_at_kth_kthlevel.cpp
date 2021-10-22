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


int kth_level_sum(Node*root,int k){

    if (root==NULL)
    {
        return -1;//
    }
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    int level=0;
    int sum=0;

    while(!q.empty()){
        Node*node=q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum=sum+node->data;
            }
        if(root->left)
            q.push(root->left);
        if(root->right)
            q.push(root->right);
        }
        else if (!q.empty())
                q.push(NULL);
                level++;
    }
    return sum;


}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    cout<<"level oreder traversal is"<<endl;
   cout<< kth_level_sum(root,2);
    return 0;
    
}



