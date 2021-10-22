#include <iostream>
using namespace std;
struct Node {
   int data;
   struct Node *next;
};
struct Node* head = NULL;

void insert(int value) 
{
   struct Node* ptr = new Node;
   ptr->data = value;
   ptr->next = head;
   head = ptr;
}

void display() {
   struct Node* H;
   H= head;
   while (H != NULL) {
      cout<< H->data <<" ";
      H = H->next;
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