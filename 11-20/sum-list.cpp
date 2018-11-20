#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next; // next is NULL when we're at the end of the list
};

struct LinkedList {
    Node* head; // head is the starting Node of the list
    Node* tail; // a pointer to the last Node in the list
};

double sumList(Node* head){
   // base case, head is NULL, list is empty
   if(!head) return 0;

   // add the head's element to the sum of the rest
   // of the list
   double sum = head->data + sumList(head->next);

   return sum; 
}

int main(int argc, const char *argv[])
{
    // let's make the linked list [10]

    LinkedList *l = new LinkedList;

    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;

    one->data = 1;
    one->next = two;
    two->data = 2;
    two->next = three;
    three->data = 3;
    three->next = NULL;

    l->head = one;
    l->tail = three;

    cout << sumList(one) << endl;

    return 0;
}