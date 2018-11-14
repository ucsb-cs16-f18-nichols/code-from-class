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

int lengthOfList(LinkedList *l) {
    int count = 0;

    Node *n = l->head;
    while (n != NULL) {
        // this is a non-null Node that we haven't seen before
        // so, add one to the counter
        count++;
        n = n->next;
    }

    return count;
}

int lengthOfList2(LinkedList *l) {
    int count = 0;

    // for (declaration; test; increment)

    for (Node *n = l->head; n != NULL; n = n->next) {
        count++;
    }

    return count;
}

void freeLinkedList(LinkedList* list) {
    // delete the LinkedList and all the Nodes inside it
    // be careful, because you have to delete the Nodes first
    // (because deleting the LinkedList deletes the only pointer
    // you have to those Nodes)

    Node *n = list->head;
    while (n != NULL) {
        // save the next pointer before we delete n
        Node *next = n->next;
        delete n;
        n = next;
    }

    // now the Nodes are taken care of, so we can finally
    // delete the LinkedList
    delete list;
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

    cout << "length of l is: " << lengthOfList(l) << endl;
    cout << "length of l is: " << lengthOfList2(l) << endl;

    freeLinkedList(l);
    
    return 0;
}