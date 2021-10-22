#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*link;
};

Node*head=NULL;


// for finding the the middle element we will use two pointer slow and fast at the head node
//slow will move by 1 and fast will move by 2
//condition we will get is for odd and even 
//for odd fast->link==null
//for even fast=NULL
//we will display the slow pointer as middle element slow->data
void middle()
{ 
    Node*slow=head;
    Node*fast=head;

    if (head=NULL)
    cout<<"List is empty";
    else
    while(fast!=NULL && fast->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
    }
    cout<<"Middle element ="<<slow->data;
}

void insert_at_end(int value)
{
    Node*ptr=new Node();
    ptr->data=value;
    ptr->link=NULL;
    
    if (head==NULL)
    head=ptr;
    else
    {
        Node*temp=head;
        while(temp->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr ;
    }
}
void Display()
{
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
 }

int main()
{   
  
    insert_at_end(1);
    insert_at_end(2);
    insert_at_end(3);
    insert_at_end(4);
   // insert_at_end(5);
       middle();
    return 0;
}

