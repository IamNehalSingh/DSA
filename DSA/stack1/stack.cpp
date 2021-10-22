#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *link;
};

Node*top=NULL;

bool (isempty())
{
    if(top==NULL)
    return true;
    else
    return false;
}

void push(int value)
{
    Node*ptr= new Node();//for creating the newnode
    ptr->data=value;
    ptr->link=top;
    top=ptr;

}
void pop()
{ 
    if (isempty())
        cout<<"stack is empty";
    else
    {
        Node*ptr=top;
        top=top->link;
        delete(ptr);
    }
}

void showTop()// for displaying wether the stack is empty or not

{
    if (isempty())
        cout<<"stack is empty";
        else
        cout<<"top most element:"<<top->data;
    
}
void display()
{
    struct Node* ptr;
    if (top == NULL)
    {
        cout << "\nStack Underflow";
        exit(1);
    }
    else
    {
        ptr = top;
        while (ptr!= NULL)
        {
            cout << ptr->data << "-> ";
            ptr= ptr->link;
        }
    }

}
int main()
{
    push(1);
    push(2);
    push(3);
    display();
    showTop();

    return 0;
}

