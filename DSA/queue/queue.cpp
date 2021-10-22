#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*link;

};
Node*front=NULL;
Node*rear=NULL;

bool isempty(){
    if (front==NULL and rear==NULL)
    return true;
    else 
    return false;
}
void enque(int val){
    Node*ptr=new Node();
    ptr->data=val;
    ptr->link=NULL;

    if(front==NULL){
        front=ptr;
       
        rear=ptr;
    }
    else{
        rear->link=ptr;
        rear=ptr;
    }
}
void deque(){
    if(isempty())
    cout<<"queue is empty";

    if (front==rear){
        free(front);
        front=rear=NULL;
    }
    else{
        Node*ptr=front;
        front=front->link;
        free(ptr);
    }
}

void showfront(){
    if(isempty())
    cout<<"queue is mepty";
    else
    cout<<"element at front is"<<front->data;

}

void display()
{
 if (isempty())
  cout<<"Queue is empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->data<<" ";
   ptr= ptr->link;
  }
 }
}


int main(){
    int choice,flag=1,val;
    while(flag==1){
        cout<<"choose \n 1enque,\n 2qeque,\n 3showfront,\n 4display,\n 5exit";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"enter the val";
                    cin>>val;
                    enque(val);
                    break;
            case 2:deque();
                    break;
            case 3:showfront();
                    break;
            case 4:display();
                    break;
            case 5:flag=0;
                break;
        }
    }
    return 0;
}


