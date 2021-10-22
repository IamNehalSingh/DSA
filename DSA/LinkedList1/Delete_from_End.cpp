#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node*head=NULL;

void insert_from_beg(int data)
{
    Node*ptr=new Node();
    ptr->data=data;
    ptr->link=head;
    head=ptr;

}



void Delete_from_end()
{
    Node*ptr,*prev;
    if (head==NULL)
    cout<<"list is empty";
    //for single node
    if(head->link=NULL)
    {
        ptr=head;
        head=NULL;
        free (ptr);
    }
    else
    {
        
        ptr=head;
        while(ptr->link!=NULL)
        {
            prev=ptr;
            ptr=ptr->link;

        }
        prev->link=NULL;
        delete(ptr);
    } 

 }

void Display()
{
    Node*ptr=head;
    if (head=NULL)
        cout<<"list is empty";

    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->link;
    } 
}
int main()
{
    insert_from_beg(1);
    insert_from_beg(2);
    insert_from_beg(3);
    insert_from_beg(3);
    insert_from_beg(4);
    insert_from_beg(5);
    Delete_from_end();
    Display();
    return 0;

}