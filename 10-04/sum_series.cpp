#include <iostream>
#include <cstdlib> // now I can use atoi
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
        cout << "Usage: " << argv[0] << " n, where n is >= 1\n";
        exit(1);
    }

    int n = atoi(argv[1]);

    double sum = 0.0;

    // i++ ≡ i += 1 ≡ i = i + 1
    for (int i = 1; i <= n; i++) {
        sum += 1/static_cast<double>(i);
    }

    cout.setf(ios::fixed);     // Using a fixed point representation
    cout.setf(ios::showpoint); //Show the decimal point
    cout.precision(3);

    cout << "The sum of the series from 1 to " << n 
         << " is: " << sum << endl;

    return 0;
}