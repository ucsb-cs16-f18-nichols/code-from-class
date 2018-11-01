#include <iostream>
using namespace std;

void swapValue(int* x, int* y) {
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(int argc, char *argv[])
{
    int a=30, b=40;
    swapValue(&a, &b); 
    cout<<a<<" "<<b<<endl;

    return 0;
}