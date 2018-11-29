#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int pow(int n, int m) {
    if (m == 0) {
        return 1;
    } else {
        return n * pow(n, m-1);
    }
}

int main(int argc, char *argv[])
{
    cout << pow(2, 3) << endl;

    return 0;
}