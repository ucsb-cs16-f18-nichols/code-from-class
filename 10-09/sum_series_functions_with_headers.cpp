// to compile:
// g++ sum_series_functions_with_headers.cpp sum_series_library.cpp -o sum_series_functions_with_headers

#include <iostream>
#include <cstdlib> // now I can use atoi
#include "sum_series_library.h" // gives us access to test_sum_series and sum_series
// essentially, this is copying and pasting the sum_series_library.h
// file right here
using namespace std;


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
