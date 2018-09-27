#include <iostream>
using namespace std;

int main()
{
    int x; // this declares a variable called x that is an int
    x = 5;
    cout << x << endl;

    int y = 7 + x;
    cout << y + 8 << endl;

    // double is for floating-point numbers,
    // floats are saved in memory with some # of bytes
    // doubles use twice as much memory, so they can be
    // more accurate/bigger
    double d = 3.14;

    cout << d << endl;

    cout << "Enter your favorite number: ";
    int favorite_number;
    cin >> favorite_number;
    cout << "You typed " << favorite_number << ".\n";

    bool b1 = true, b2 = false;
    cout << "b1 = " << b1 << endl;
    bool b3 = b1 && b2; // b1 AND b2
    bool b4 = b1 || b2; // b1 OR b2

    char c = 'c'; // chars hold single characters, and use 
    // single quotes

    string s = "c"; // strings are double quotes

    return 0;
}