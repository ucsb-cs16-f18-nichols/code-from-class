// compile with debug symbols:
// g++ -g segfault1.cpp -o segfault1
// then use either gdb or lldb:
// $ gdb segfault1
// (gdb) run
// (gdb) print p

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int *p;

    cout << *p << endl;

    return 0;
}