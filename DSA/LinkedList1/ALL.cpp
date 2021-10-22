#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*link;

};
Node*head=NULL;

void Delete_At_BEG()
{
    if (head==NULL)  //if the list is empty then we cant delete the node;
    cout<<"list is empty";
    else
    {
        Node*ptr=head; //assigning the head pointer to the ptr
        head=head->link; //creating the new head and assigning the the link to the new head
        delete(ptr);//now the head is assigned to the new head u can delete the ptr node;
    }
}
void Delete_at_end()//for this we will assign the two new pointer
{
    Node*ptr;
    if (head==NULL)//if head is null no nedd od delete opertion
    cout<<"list is empty";
    //for single Node
    if(head->link==NULL)//case 1 if it has only one node then
    {
        ptr=head;//we will assign the ptr =head so that  we can delete easi.y
        head=NULL;
        delete(ptr);
    }
    //for More than one Node;
    else{
    Node*prev;//assigning the second pointer
    ptr=head;
    while(ptr->link!=NULL)//traversing link till null 
    {
        prev=ptr;//keeping track of ptr
        ptr=ptr->link;

    }
    prev->link=NULL;//assingning the newly created  link to null
    delete(ptr);//deletaing the link
    }  
}

void insert_at_END(int value)
{
    Node*ptr=new Node();//for new node
    ptr->data=value;  //inserting the value at the newly created Node
    ptr->link=NULL;   //where link wii be null at end


    if (head==NULL)   //if linked list is empty your newly node will be inserted directly
    head=ptr;
    else{
        Node*temp=head;//if it is not empty assigning the temp pointer to the head of list
        while(temp->link!=NULL)//traversing the node till the end part
        {
            temp=temp->link;//assigning the temp value to the ptr
        }
        temp->link=ptr;//Now the  link null part will assign some value
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
    insert_at_END(1);
    insert_at_END(2);
    insert_at_END(3);
    insert_at_END(4);
    insert_at_END(5);
    insert_at_END(6);
   
 
    Delete_At_BEG();
    Delete_at_end();
    display();
 
    
    return 0;

}

