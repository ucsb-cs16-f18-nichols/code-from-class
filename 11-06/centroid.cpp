#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
}; // <-- remember the ;

void print_point(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

// the centroid of a bunch of points is the
// (avg x value, avg y value)
Point centroid(Point ps[], int size) {
    double avg_x = 0.0, avg_y = 0.0;

    for (int i = 0; i < size; i++) {
        // add the current x-coord to avg_x
        avg_x += ps[i].x;
        // same for y
        avg_y += ps[i].y;
    }

    avg_x /= size;
    avg_y /= size;

    Point ret;
    ret.x = avg_x;
    ret.y = avg_y;

    return ret;
}


int main(int argc, const char *argv[])
{
    Point ps[] = {{1,1}, {2,3}, {5, 7}};

    print_point(centroid(ps, 3));

    return 0;
}