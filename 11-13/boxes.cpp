#include <iostream>
using namespace std;

struct Point {
    double x, y;
};

struct Box {
    Point ul;
    int width, height;
};

int main(int argc, const char *argv[])
{
    Box b1 = {{3,4}, 5, 6};
    Box b2;

    Point p = {6, 7};
    // alternatively, you could do
    // b2.ul.x = 6;
    // b2.ul.y = 7;
    b2.ul = p;

    cout << b2.ul.x << endl;
    cout << b2.ul.y << endl;
    
    return 0;
}