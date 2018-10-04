#include <iostream>
#include <cstdlib> // now I can use atoi
using namespace std;

int main(int argc, char* argv[]) {
    
    // print out the numbers from 1 to 10
    // for (int i = 1; i <= 10; i++) {
    //     cout << i << endl;
    // }

    int i = 1;
    while (i <= 10) {
        cout << i << endl;
        i++;
    }

    return 0;
}