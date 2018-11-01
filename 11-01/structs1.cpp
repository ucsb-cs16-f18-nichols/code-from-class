#include <iostream>
using namespace std;

// a struct is short for "structure" or "data structure"
// it's a way to combine a bunch of types into one logical
// package
struct Point {
     double x; //member variable of Point
     double y; //member variable of Point
}; // <- watch out for this semicolon

// Point is now a new type that we can use
// it is made up of "smaller" types

int main(int argc, char *argv[])
{
    Point p = {1.0, 2.0}; // this declares a Point with
    // x coordinate 1.0 and y coordinate 2.0

    cout << "(" << p.x << ", " << p.y << ")" << endl;

    Point *q = &p;
    cout << "(" << (*q).x << ", " << (*q).y << ")" << endl;    

    // (*_)._ ≡ _->_
    cout << "(" << q->x << ", " << q->y << ")" << endl;        

    return 0;
}