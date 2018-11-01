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

void print_Point(Point q) {
    cout << "(" << q.x << ", " << q.y << ")" << endl;
}

void initialize_Point(Point &r, double x_coord, double y_coord) {
    r.x = x_coord;
    r.y = y_coord;
}

int main(int argc, char *argv[])
{
    Point p = {1.0, 2.0}; // this declares a Point with
    // x coordinate 1.0 and y coordinate 2.0

    print_Point(p);

    initialize_Point(p, 4, 5);

    print_Point(p);

    return 0;
}