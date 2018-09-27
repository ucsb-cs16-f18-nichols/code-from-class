// This program will write "Hello, world!" to the terminal.

/*

This is a multi-line comment.

Weeeeeee

*/

#include <iostream> // this gives us access to cout
// the <>'s tell the C++ compiler to look in the pre-installed
// library location
using namespace std; // now I can just say cout instead of 
// std::cout

// C++ doesn't care at all about whitespace

// int is the return type of this function
int main() {
    // this is the definition of the main function
    // you must have a main function for your code
    // to compile
    // this is where your program starts

    // cout gives us access to terminal output
    // "Hello, World!\n" is a string
    cout << "Hello, World!\n"; // ;'s end statements
    cout << "Hello, " << "World!" << endl; // endl stands for newline
    cout << "Hi "; /* here's a comment in a weird place */ cout << "mom"; cout << ".\n";
    // (same as \n)

    return 0; // 0 means success
}

// to compile this program, you use:
// g++ hello.cpp -o hello
// and to run it:
// ./hello