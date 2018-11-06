#include <iostream>
#include <cmath>
using namespace std;

int* createAnInt() {
    return new int; // "new X" makes space for one thing 
    // of type X on the heap.
    // It returns the *address* of where that space was
    // made.
}


int main(int argc, const char *argv[])
{
    int *x = createAnInt();
    int *y = new int;

    // now I have space on the heap for two things,
    // and they live for as long as I tell them to

    *x = 5;
    *y = 7;

    delete x; // delete takes a location of something on the heap,
    // and deallocates that memory so that it can be used for
    // something else later
    delete y;

    return 0;
}