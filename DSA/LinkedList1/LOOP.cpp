#include<bits/stdc++.h>
#include<iostream>

using namespace std;


struct Node{
    int data;
    Node*link;
};
Node*head=NULL;

void makecycle(Node *&head ,int pos)
{
    Node*temp=head;
    Node*startNode;

    int count=1;
    while(temp->link!=NULL){
        if (count==pos){
        startNode=temp;
    }
    temp=temp->link;
    count++;
    }
    temp->link=startNode;
}

int check_loop(Node *head)
{
    Node *slow, *fast;
    slow=head;
    fast=head;

        while(fast!=NULL && fast->link!=NULL)
        {
            fast=fast->link->link;
            slow=slow->link;
            
            if (fast == slow)
                {   
                    cout<<"loop found"<<endl;
                    return 1;
                }
        }

    return 0;
}

void insert_at_end(int value)
{
    Node*ptr=new Node();
    ptr->data=value;
    ptr->link=NULL;


    if (head==NULL)
    head=ptr;
    else{
            Node*temp=head;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=ptr;
    }   
}
void Display(){
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
    insert_at_end(5);
    insert_at_end(6);
    insert_at_end(7);
    insert_at_end(8);
    insert_at_end(9);
    insert_at_end(5);
    makecycle(head,5);
    cout<<check_loop(head)<<endl;	
    
    //Display();
    return 0;
}


