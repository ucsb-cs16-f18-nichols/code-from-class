#include <iostream>
#include <cstdlib> // now I can use atoi
using namespace std;

int main(int argc, char* argv[]) {
    int i = 10;
    double sum1 = 1/i;
    double sum2 = 1/static_cast<double>(i);

    cout << sum1 << endl;

    cout.setf(ios::fixed);     // Using a fixed point representation
    cout.setf(ios::showpoint); //Show the decimal point
    cout.precision(3);

    cout << sum2 << endl;

    cout << 2.0/9 << endl;

    return 0;
}