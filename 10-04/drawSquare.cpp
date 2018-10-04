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

    // this outer for loop will keep track of which
    // line of the square we're on
    for (int i = 0; i < n; i++) {
        // the inner loop will keep track of which
        // column of the square we are outputting
        // on our current line
        for (int j = 0; j < n; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}