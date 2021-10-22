#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node *head=NULL;

//     P  C  N
//     N  1->2->3->NULL


void Reverse()
{
    Node *prev,*current,*next;
    prev=NULL;
    current=head;

    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;//  N<-1 2
        prev=current;       //increment the previous Node 
        current=next;        //increment the current pointer
    }
    head=prev;
}

void Insert_AT_end(int value)
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
        }temp->link=ptr;
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
    Insert_AT_end(1);
    Insert_AT_end(2);
    Insert_AT_end(3);
    Insert_AT_end(4);
    Insert_AT_end(5);
    Insert_AT_end(6);
    cout<<"list is :-";
    Display();
    cout<<endl;
    cout<<"reverse of linked list is:-";
    Reverse();
    Display();

    return 0;
}