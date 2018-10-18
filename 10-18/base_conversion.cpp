#include <iostream>
#include <string>
#include <cassert>
using namespace std;

// n is the number to convert
// base is the base to convert it to
string convert_to_base(int number, int base) {
    string output = "";
    if (number == 0) {
        output = "0";
    } else {
        // we're done when we get to 0
        while (number != 0) {
            int lastDigit = number % base;
            // once we get the digit, we need to make it a
            // character so that we can put it at the beginning
            // of our output string
            char digit;
            if (lastDigit <= 9) {
                // http://en.cppreference.com/w/cpp/language/ascii
                // because the characters go in order, starting at
                // 48 ('0')
                // addition of characters here
                // (but really, chars are just numbers)
                digit = '0' + static_cast<char>(lastDigit);
            } else {
                digit = 'A' + static_cast<char>(lastDigit - 10);
            }
            // add the digit character to the beginning of the
            // output that we are building up
            output = digit + output;
            // get the smaller number to convert now
            number = number / base;
        }
    }

    return output;
}

int main(int argc, char *argv[])
{
    int base, number;

    cout << "enter base: ";
    cin >> base;
    assert(base <= 16 && base >= 2);
    cout << "enter number: ";
    cin >> number;

    cout << number << " in base " << base << " is: " << convert_to_base(number, base) << endl;

    return 0;
}