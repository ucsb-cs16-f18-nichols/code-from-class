#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 12, y = 34;

    cout << x << ", " << y << endl;

    int tmp = x;
    x = y;
    y = tmp;

    cout << x << ", " << y << endl;

    return 0;
}