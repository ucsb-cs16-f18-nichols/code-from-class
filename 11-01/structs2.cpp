#include <iostream>
using namespace std;

// a struct is short for "structure" or "data structure"
// it's a way to combine a bunch of types into one logical
// package
struct Point {
     double x; //member variable of Point
     double y; //member variable of Point
}; // <- watch out for this semicolon

struct Box {
    Point ul;
    double width;
    double height;
};

// Point is now a new type that we can use
// it is made up of "smaller" types

int main(int argc, char *argv[])
{
    // ul.x = 10;     
    Box b1 = {{500, 800}, 10, 20}; // delaring the Point inside the Box

    Box b2, b3; 
    // b2.ul = {500, 800}; // doesn't work outside of b2's declaration
    b2.ul.x = 500; // member variables can always be accessed and reset
    b2.ul.y = 800;

    return 0;
}