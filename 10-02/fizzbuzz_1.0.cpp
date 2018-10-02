#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 3 == 0) {
        cout << "fizz\n";
    } else {
        cout << n << endl;
    }

    return 0;
}