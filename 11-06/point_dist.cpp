#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x;
    double y;
}; // <-- remember the ;

double dist(Point p1, Point p2) {
    // call-by-value: the points are being copied
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double dist2(const Point *p1, const Point *p2) {
    // call-by-address/pointer: no Points are being copied
    return sqrt(pow((*p1).x - p2->x, 2) + pow(p1->y - p2->y, 2));   
}

double dist3(const Point &p1, const Point &p2) {
    // call-by-reference: no Points are being copied
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(int argc, const char *argv[])
{
    Point p = {0.5, 0.3};
    Point q;
    q.x = 1;
    q.y = 2;

    cout << dist(p, q) << endl;
    cout << dist2(&p, &q) << endl;
    cout << dist3(p, q) << endl;

    return 0;
}