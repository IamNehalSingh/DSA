#include<iostream>
using namespace std;

//link structure

struct Node{
    int data;
    Node*link;
};

Node*head=NULL;//creating head and making it as NULL !!

void insert(int value)
{                                           //for inserting the node
    Node*ptr=new Node();                   //creating the new node  u can take as per your wush in the terms of ptr
    ptr->data=value;                      //as linked list has two parts 1st head assigning it some value
    ptr->link=head;                      //linking the one node to another note
    head=ptr;                           //assigning the head value of one node  to value of another
}

void insertatend(int value)
{
    Node*ptr=new Node();                //for inserting the node at end we create the new node
    ptr->data=value;                    //assigns its data
    ptr->link=NULL;                     //as it is end part its link value will be null
    


    if (head==NULL)                     //if we insert the node at the empty linked list head=ptr
    head=ptr;
    else
    {
    Node *temp=head;                    //if the linked list is not empty we will assign the temp  to the link part of the 1at node
    while(temp->link!=NULL)             //traverse untill we find the last node
    {
        temp=temp->link;                   //assign the temp value to the link part
    }
    temp->link=ptr;                     //now we will move those part and gives thoe pointer to ptr
 }
}

void display()
{
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->link;
    }
}
int main()
{
    insert(0);
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    insertatend(6);
    display();
    return 0;
}
