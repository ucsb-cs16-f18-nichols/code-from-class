#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next; // next is NULL when we're at the end of the list
};

struct LinkedList {
    Node* head; // head is the starting Node of the list
    // Node* tail; // a pointer to the last Node in the list
};

void insertToHeadOfList(LinkedList *l, int value) {
    // make a new node
    Node *newHead = new Node;
    newHead->data = value;

    // newHead's next needs to point to the current l
    // of the list l
    newHead->next = l->head;

    // now, we must change the head pointer of the list itself
    l->head = newHead;
}

void printList(LinkedList *l) {
    // given [1,2,3], it will print 1->2->3->NULL

    Node *n = l->head;
    // n is at the start of the list
    while (n != NULL) {
        // we know we have an actual Node to work with
        cout << n->data << "->";

        // now we're done with the current n;
        // advance the pointer
        n = n->next;
    }

    // now n is NULL
    cout << "NULL" << endl;
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

    // print before 
    printList(l);

    // add 10 to the head
    insertToHeadOfList(l, 10);

    // print after
    printList(l);

    LinkedList *l2 = new LinkedList;
    l2->head = NULL;

    // l2 is currently empty
    insertToHeadOfList(l2, 6);
    insertToHeadOfList(l2, 5);
    insertToHeadOfList(l2, 4);

    printList(l2);
    
    return 0;
}