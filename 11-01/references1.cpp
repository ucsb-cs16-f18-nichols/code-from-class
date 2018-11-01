#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int d = 5;
    int &e = d;

    d = 6;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    e = 7;

    cout << "d: " << d << endl;
    cout << "e: " << e << endl;

    return 0;
}