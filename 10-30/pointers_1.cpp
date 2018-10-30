#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int *p, y;

    // p and y are garbage values

    cout << "p: " << p << endl;
    cout << "y: " << y << endl;
    // cout << "*p: " << *p << endl;
    // the above line will most likely 
    // give a segmentation fault

    y = 3;

    cout << "p: " << p << endl;
    cout << "y: " << y << endl;

    p = &y;

    cout << "p: " << p << endl;
    cout << "y: " << y << endl;

    *p = 5;

    cout << "p: " << p << endl;
    cout << "y: " << y << endl;
    cout << "*p: " << *p << endl;

    return 0;
}