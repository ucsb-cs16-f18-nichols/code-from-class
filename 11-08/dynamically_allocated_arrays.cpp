#include <iostream>
using namespace std;

int main(int argc, const char *argv[])
{
    // to allocate an array of ints on the heap:
    int *arr = new int[42];

    for (int i = 0; i < 42; i++) {
        arr[i] = i;
    }

    for (int i = 0; i < 42; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // when we're done using the array

    delete[] arr; // now this memory has been "reclaimed"

    // and it's undefined behavior to access that memory now

    for (int i = 0; i < 42; i++) {
        cout << arr[i] << " "; // arr shouldn't be accessed
    }
    cout << endl;

    // to make sure you never do this kind of thing,
    // make it a habit to set any pointers to deallocated memory
    // to NULL/0/nullptr

    arr = NULL;

    // arr[0] = 5; // this is now definitely a segfault

    return 0;
}