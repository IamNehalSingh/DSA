#include<iostream>
using namespace std;
struct bstnode{
	struct bstnode*leftchild;
	int data;
	struct bstnode*rightchild;
};
typedef bstnode *BTPTR;
BTPTR create(BTPTR &t,int k)
{
	BTPTR temp;
	if(t==NULL)
	{
		temp=new bstnode();
		temp->data=k;
		temp->leftchild=NULL;
		temp->rightchild=NULL;
		return temp;
	}
	else
		{
			if (t->data>k)
			t->leftchild=create(t->leftchild,k);
			else
			t->rightchild=create(t->rightchild,k);
			return t;
					}		
}
int tmax(BTPTR node * root,int t)
	{		
		if (t->rightchild==NULL)
		return t->data;
		else
		return (t->rightchild);
    
    }
int tmin(BTPTR node *root,int data)
 {
 	if (t->leftchild==NULL)
	 return t->data; 	
 	else
 	return (t->leftchild)
   }  
int height(node*p)
{
	if (p==NULL)
	return 0;
	int leftchild=height(p->leftchild)
	return 0;
	int rightchild=height(p->rightchild)
	return 0;
	if (leftchild>rightchild)
	{int height=1+leftchild;}
	
	else
	{int height=1+rightchild;}
	return height;
}
	void print(BTPTR  &t,int k)
			{
				if (t=NULL)
				return;
				if (k==1)
				cout<<t->data;
				if(k>1)
				print(t->leftchild,k-1);
				print(t->rightchild,k-1);
				
			}
			
void inorder(BTPTR  t)
	{
	if (t!=NULL){
		inorder(t->leftchild);
		cout<<t->data;
		inorder(t->rightchild);
		}			
	int main()	
		{ 
			BTPTR t1=NULL;
			int n,i,a,root,num,data;
			cout<<"enter the elements of tree";
			cin>>n;
			cout<<"enter the elemnts";
			for(i=0;i<n;i++)
			{
				 cin>>a;
				 t1=create(t1,a);
			}
			cout<<tmax(t1);
				 cout<<endl<<tmin(t1) <<endl;
				 inorder(t1);
			cout<<"your height of the tree is";
			cout<<"height(node*p)"	;	
			return 0;
	
	
	
	
	
	
	
	
	
	
	
	
