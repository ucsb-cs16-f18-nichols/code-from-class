#include <iostream>
#include <cstdlib> // now I can use atoi
#include <cassert>
using namespace std;

double sum_series(int n); // this is a function declaration
double abs(double x);
bool double_approximate_equality(double a, double b);
void test_sum_series();

// argc is "argument count"
// argv is "argument vector" (list)

// in char* argv[], the [] means we have an array (list)
// char* means an array (list) of characters (i.e., a string)

int main(int argc, char* argv[]) {
    
    // Write a program that calculates the series:  
    // 1+ 1/2+ 1/3+ ....1/n, 
    // where `n` is specified by the user

    if (argc != 2) {
        // we'll run the tests if we're not given an n
        // command line argument

        test_sum_series();
    } else {

        int n = atoi(argv[1]);

        

        cout.setf(ios::fixed);     // Using a fixed point representation
        cout.setf(ios::showpoint); //Show the decimal point
        cout.precision(3);

        cout << "The sum of the series from 1 to " << n 
             << " is: " << sum_series(n) << endl;
     }

    return 0;
}

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