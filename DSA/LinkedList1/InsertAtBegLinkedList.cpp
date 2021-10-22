#include<iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

Node*head=NULL;


void insert_at_beg(int value)
{
    Node*ptr=new Node();
    ptr->data=value;
    ptr->link=head;
    head=ptr;

}
void dispaly()
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
    insert_at_beg(1);
    insert_at_beg(2);
    insert_at_beg(3);
    insert_at_beg(4);
    insert_at_beg(5);
    dispaly();
    return 0;
}