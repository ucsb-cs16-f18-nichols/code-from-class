#include <iostream>
#include <cstdlib> // now I can use atoi
using namespace std;

// argc is "argument count"
// argv is "argument vector" (list)

// in char* argv[], the [] means we have an array (list)
// char* means an array (list) of characters (i.e., a string)

int main(int argc, char* argv[]) {

    // char* is a "C-string"
    // string is a "C++ string"

    cout << "argc is " << argc << endl;

    if (argc != 2) {
        cerr << "usage: " << argv[0] << " n, where n is a number\n";
        return 1;
    }

    int n;
    // get n out of argv[1]
    n = atoi(argv[1]);

    if (n % 3 == 0 && n % 5 == 0) {
        cout << "fizzbuzz\n";
    } else if (n % 5 == 0) {
        cout << "buzz\n";
    } else if (n % 3 == 0) {
        cout << "fizz\n";
    } else {
        cout << n << endl;
    }

    return 0;
}