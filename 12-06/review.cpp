#include <iostream>
using namespace std;

// Flow control if-else statements

void if_else() {
    int x = 5;
    int y = 17;
    if (x > 4 && y < 7) {
        cout << "A" << endl;
    } else if (x < 4 && y > 12) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }
}

// Data types and declarations

void data_types_and_decls() {
    int x; // this is a declaration of an int x
    bool b;
    char c;
    int *y = &x;

    // type_name var_name (optional = value)

    // you can convert from int to bool
    // all nonzero numbers are true
    bool b2 = 0; bool b3 = 55234232; 

    int n = static_cast<int>(6.3);

    bool b4 = -55234232;

    cout << b4 << endl;
    cout << static_cast<int>(b4) << endl;

    bool b5 = 0.00;

    cout << b5 << endl;
    cout << static_cast<double>(b5) << endl;
}

// While loops

void while_loops() {
    int x = 0;

    // while:
    // check condition first, execute the body if true, then
    // check the condition again, …

    while (x < 0) {
        cout << "This never happens" << endl;
    }

    // do-while:
    // execute the body,
    // check the condition, execute the body if true,
    // check the condition again, …

    do {
        cout << "But this does" << endl;
    } while (x < 0);
}

// For loops

void for_loops() {

    // initialization
    // loop:
    // check condition
    // execute body if true; otherwise end the loop
    // execute increment statement
    // goto loop
    for (int i = 10; i >= 1; i++) {
        cout << i << endl;
    }
    cout << "lift off!" << endl;
}

// Evaluating expressions

/* 

see the precedence table in the textbook

*/

void exprs() {
    int x = 5, y = 7;
    bool b1 = true, b2 = false;

    // x++ sets x to 6, and "returns" 5
    // ++y sets y to 8, and "returns" 8

    // how do you write the parentheses in the next line?
    cout << ( x + 1 < 5 && y == 9 || b1 && b2 ) << endl;
}

void exprs2() {
    int x = 5;

    int y = x++; // change x to 6, and set y to the old value

    cout << y << endl;

    cout << x++ << endl;
    cout << ++x << endl;
}

// Data representation

/*

ints/pointers: 4 bytes
doubles: 8 bytes
chars: 1 byte
etc.
see book for more details

0x87 is what in decimal?
87 is what in hex? binary?

*/

// Arrays

void arrays() {
    int arr[] = {1, 2, 3}; // can initialize with data immediately

    // arr by itself is a pointer to the first element

    int arr2[3]; // or wait to do so
    arr2[0] = 4; 
    arr2[1] = 5; 
    arr2[2] = 6;

    for (int i = 0; i < 3; i++) {
        cout << arr[i];
        if (i < 2) cout << ", ";
    }
    cout << endl;
}

// Passing parameters to functions (by value, by pointer, by reference)

void by_value(int x) {
    x = 5;
}

void by_pointer(int *x) {
    *x = 6;
}

void by_reference(int &x) {
    x = 7;
}

void test_parameter_passing() {
    int y = 4;
    by_value(y); // y is still 4; the value of y was only *copied*
    by_pointer(&y); // y is now 6
    by_reference(y); // y is now 7
}

// Passing arrays to functions and returning arrays from functions

// return a new array on the heap, that is twice the size of the input array
// the given array is repeated twice in the new array
int* array_twice(int arr[], int size) {
    int *new_arr = new int[size*2];

    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
        new_arr[i+size] = arr[i];
    }

    return new_arr;
}

// Pointers

void pointers() {
    int x;
    int *p = &x; // p holds the *memory address* of x

    *p = 5; // x is now 5 because x and *p are linked together
    cout << x << endl;

    int *y = new int(55);

    cout << *y << endl;
}

// Structs

/*

Structs help you keep track of a group of related variables

*/


// laid out in memory in the order declared
struct Point {
    int x;
    int y;
};

void structs() {
    Point p1 = {1, 2};
    
    Point p2;
    p2.x = 3;
    p2.y = 4;

    Point *pp = &p2;
    pp->y = 5;
}

// Pointers and structs

void setToZero(Point *p) {
    p->x = 0;
    p->y = 0;
}

// Pointers and arrays

void printArray(int *arr, int size) {
    while (size > 0) {
        cout << *arr;
        arr = arr + 1;
        size = size - 1;
    }
    cout << endl;
}

void printArrayTest() {
    int arr[] = {8,6,7,5,3,0,9};
    printArray(arr, 7);
}

// Arrays of structs

// const because we're not updating p
void printPoint(const Point &p) {
    // we can use the . with references
    cout << "(" << p.x << ", " << p.y << ")";
}

void printArrayOfPoints(Point arr[], int size) {
    for (int i = 0; i < size; i++) {
        printPoint(arr[i]);
        cout << endl;
    }
}

// Dynamic Memory Allocation

void dynamic_memory_allocation() {
    int x = 5; // local vars and function parameters are defined on the stack

    // anything declared with new lives in the heap, and it's up 
    // to you to keep track of the memory
    int *y = new int; 
    *y = 7;

    // memory allocated using new is freed using delete
    delete y;

    int *arr = new int[10];
    delete[] arr;
}

// Linked-lists
struct Node {
    int data;
    Node *next;
};

struct LinkedList {
    Node *head;
    Node *tail;
};

// make the list 1->2->3->X
LinkedList* one_two_three() {
    LinkedList *l = new LinkedList;

    Node *one = new Node;
    Node *two = new Node;
    Node *three = new Node;
    one->data = 1;
    two->data = 2;
    three->data = 2;
    one->next = two;
    two->next = three;
    three->next = NULL;

    l->head = one;
    l->tail = three;

    return l;
}

// Strings

#include <cstring>

void c_strings() {
    char s1[50] = "cat";
    const char *s2 = "dog";

    cout << "length of s1: " << strlen(s1) << endl;

    cout << "strcmp(s1, s2): " << strcmp(s1, s2) << endl;
    cout << "strcmp(s2, s1): " << strcmp(s2, s1) << endl;
    cout << "strcmp(s1, s1): " << strcmp(s1, s1) << endl;

    // this is like s1 = s1+s2
    strcat(s1, s2);

    cout << "s1: " << s1 << endl;

    // this is like s1 = s2
    strcpy(s1, s2);

    cout << "s1: " << s1 << endl;   
}

#include <string>

void cpp_strings() {
    string fruit = "Apple";

    int len = fruit.length();
    cout << "len: " << len << endl;

    int pos = fruit.find('l');
    cout << "pos: " << pos << endl;

    string part = fruit.substr(1,3);
    cout << "part: " << part << endl;

    fruit.erase(2,3);
    cout << "fruit after erase: " << fruit << endl; 

    fruit.insert(2,"ricot");
    cout << "fruit after insert: " << fruit << endl; 

    fruit.replace(2,5,"ple");
    cout << "fruit after replace: " << fruit << endl; 
}

// Iteration through lists

void print_list_twice(Node *head) {
    Node *cur = head;
    while (cur != NULL) {
        cout << cur->data << endl;
        cur = cur->next;
    }

    for (Node *cur = head; cur != NULL; cur = cur->next) {
        cout << cur->data << endl;
    }
}

// Recursion, recursion on linked lists/strings

/* 

Recursion is when a function calls itself
base case, recursive case

think about what is happening on the stack

*/

// compute nᵖ -- this is a bit similar to the factorial function, isn't it?
double pow(double n, int p) {
    if (p == 0) return 1.0;
    else return n * pow(n, p-1);
}

void free_linked_list_recursively(Node *head) {
    if (head == NULL) return;

    free_linked_list_recursively(head->next);
    delete head;
}

void print_list_backwards(Node *head) {
    if (head == NULL) return;

    print_list_backwards(head->next);
    cout << head->data << endl;
}
