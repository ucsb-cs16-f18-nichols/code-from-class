#include <iostream>
using namespace std;

int B;
int *p; // p is a global var, it lives forever
// BUT, what we're eventually storing in p
// is an address of something that is about to die

int* foo() {
    int A;
    
    A = 15; // this memory will hold some random value
    // after foo returns
    p = &A;
    return p; // this is still a problem, because the address
    // that is getting returned is invalid
}
