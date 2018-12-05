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

Node* deleteNodeRecursiveHelper(Node *head, int value);

void deleteNodeRecursive(LinkedList *list, int value) {
  // we need to remove all Nodes with data == value inside list
  // list->head is the whole list
  Node *newHead = deleteNodeRecursiveHelper(list->head, value);
  // now, newHead is a pointer to the start of the same list without 
  // any nodes with data == value inside

  // we need to find the new tail now
  Node *newTail = newHead;
  // it's possible that we have an empty list now
  if (newTail != NULL) {
    // in this case, we have at least a 1-element list
    while (newTail->next != NULL) {
      newTail = newTail->next;
    }
    // now, once the while loop finishes, newTail is the correct element
  }

  list->head = newHead;
  list->tail = newTail;
}

Node* deleteNodeRecursiveHelper(Node *head, int value) {
  // if we're in the base case, return the empty list back
  if (head == NULL) return NULL;
  else {
    Node *newRest = deleteNodeRecursiveHelper(head->next, value);
    // by the magic of recursion, we get to assume that 
    // newRest has no Nodes with value inside
    if (head->data == value) {
      // we need to remove the head now
      delete head;
      // the list to return is the result of the recursive call
      return newRest;
    } else {
      // we keep the head
      // reset its next
      head->next = newRest;
      // the list to return starts at head
      return head;
    }
  }
}

void printList(LinkedList *l) {
  for (Node *n = l->head; n != NULL; n = n->next) {
      cout << n->data << "->";
    }
    cout << "X\n";
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

    deleteNodeRecursive(l, 2);
    printList(l);
    deleteNodeRecursive(l, 1);
    printList(l);
    deleteNodeRecursive(l, 0);
    printList(l);
    deleteNodeRecursive(l, 3);
    printList(l);
    

    return 0;
}