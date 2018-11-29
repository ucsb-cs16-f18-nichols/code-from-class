#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

// recursive version is easier to think about/code
// BUT, it's very inefficient (e.g., fib(4) calls fib(1)
// three times)
int fib(int n) {
    if (n == 0 || n == 1) {
        return 1; // base case
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int main(int argc, char *argv[])
{
    cout << fib(5) << endl;

    return 0;
}