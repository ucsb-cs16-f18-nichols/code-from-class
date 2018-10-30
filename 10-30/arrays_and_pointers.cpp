#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[]={50, 60, 70};

    int *p;

    p = arr; // p points to the start of arr 
    // the value of p is &arr[0]

    p = p + 1; // p = &arr[1]
    // even though ints take up 4 bytes,
    // you can just say + 1 (instead of + 4)
    // C++ knows how big each value of each type
    // is in memory and does the right thing for
    // you

    *p = *p + 1; // this is equivalent to:
    // arr[1] = arr[1] + 1

    return 0;
}