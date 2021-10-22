#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node*head=NULL;

void insert_from_end(int value)
{
    Node*ptr=new Node();
    ptr->data=value;
    ptr->link=NULL;

    if (head=NULL)
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
    
    insert_from_end(1);
    insert_from_end(2);
    insert_from_end(3);
    insert_from_end(4);
    insert_from_end(5);
    Display();
    return 0;

}