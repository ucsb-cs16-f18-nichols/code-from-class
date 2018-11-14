#include <iostream>
using namespace std;

int increment(int *q) {
    *q = *q + 5;
}

int increment2(int &s) {
    s = s + 5;
}

int main(int argc, const char *argv[])
{
    int x = 5, y = 7;
    int *p = NULL;
    int &r = x;

    r++;
    x++;
    p = &y;
    *p = *p + 1;

    increment(&x);
    increment2(y);

    return 0;
}