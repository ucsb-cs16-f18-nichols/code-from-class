#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    // go through the numbers from 1 to 100
    // and print them out
    while (i <= 100) {

        // if the number is even, don't print it out
        if (i % 2 == 0) {
            i++;
            continue;
        }

        // stop at 50 instead
        if (i > 50) {
            break;
        }

        cout << i << endl;

        i++;
    }


    return 0;
}