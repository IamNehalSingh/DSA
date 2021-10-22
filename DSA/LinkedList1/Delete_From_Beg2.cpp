#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};
Node*head=NULL;

void insert_from_end(int value)
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
    temp->link=ptr;
    }
}



void delete_from_beg()
{
    if (head==NULL)
    cout<<"linked list is empty";
    else
    {
        Node*ptr=head;
        head=head->link;
        delete(ptr);

    }

}
void Display()
{
    Node*temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    } 
}
int main()
{
    insert_from_end(1);
    insert_from_end(2);
    delete_from_beg();
    Display();
}