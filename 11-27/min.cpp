#include <iostream>
#include <cassert>
using namespace std;

struct Node {
    int data;
    Node* next; // next is NULL when we're at the end of the list
};

struct LinkedList {
    Node* head; // head is the starting Node of the list
    Node* tail; // a pointer to the last Node in the list
};

double min(Node* head) {
  assert(head); // this asserts that head is non-null (same as assert(head != NULL);)

  // base case - length 1 list
  if (head->next == nullptr) {
    // if we got here, the list is size 1,
    // return the head's data value
    return head->data;
  }

  // recursive case
  // let's get the minimum of the smaller list
  int min_of_smaller_sublist = min(head->next);
  // to solve the bigger problem, take the min
  // of this recursive answer and the current head's data
  if (min_of_smaller_sublist < head->data) {
    return min_of_smaller_sublist;
  } else {
    return head->data;
  }
}

// I couldn't recurse easily on a LinkedList,
// so I'll make a helper function that solves the
// problem recursively on Nodes, and then just call
// that here
double minLinkedList(LinkedList *l) {
  return min(l->head);
}

int main(int argc, const char *argv[])
{
    // let's make the linked list [10]

    LinkedList *l = new LinkedList;

    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;

    one->data = 3;
    one->next = two;
    two->data = 1;
    two->next = three;
    three->data = 2;
    three->next = NULL;

    l->head = one;
    l->tail = three;

    cout << minLinkedList(l) << endl;

    return 0;
}