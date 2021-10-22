#include <iostream>
using namespace std;

struct Node{
   int data;
   Node*link;
};
Node*head=NULL;

 void insert(int value)
{
   Node*ptr=new Node();
   ptr->data=value;
   ptr->link=head;
   head=ptr;

}
 void display()
 {
    struct Node *H;
    H=head;
    while(H!=NULL){
       cout<<H->data<<"->";
       H=H->link;
    }
 }
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"list is: ";
   display();
   return 0;
}