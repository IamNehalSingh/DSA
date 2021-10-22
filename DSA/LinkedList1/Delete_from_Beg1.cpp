#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node* head=NULL;

void insert(int value)
{
    Node*ptr=new Node();
    ptr->data=value;
    ptr->link=head;
    head=ptr;
}

void delete_at_beg()
{
    if (head==NULL)
    cout<<"LOL";
    else
    {

   
    Node*ptr=head;
    head=head->link;
    delete(ptr);
    }

}



void Display()
 {
     Node *temp=head;
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->link;
     }

 }

 int main()
 {
     insert(1);
     insert(2);
     insert(3);
     insert(4);
     insert(5);
     insert(6);
     delete_at_beg();
     Display();
     return 0;

}