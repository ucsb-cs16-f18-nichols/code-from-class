#include "sum_series_library.h"
#include <cassert>
// ""s for same directory, <>s for system libraries (like iostream)
// the implementation goes here

/* 
This function returns the sum from 1 to n.
*/
double sum_series(int n) {
    double sum = 0.0;

    // i++ ≡ i += 1 ≡ i = i + 1
    for (int i = 1; i <= n; i++) {
        sum += 1/static_cast<double>(i);
    }

    return sum;
}

// returns the absolute value of x
double abs(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}


// given a and b, returns true if
// a and b are approximately equal
bool double_approximate_equality(double a, double b) {
    return abs(a - b) < 0.01;
}

void test_sum_series() {
    assert( double_approximate_equality(sum_series(2), 1.500) );
    assert( double_approximate_equality(sum_series(3), 1.833) );
}