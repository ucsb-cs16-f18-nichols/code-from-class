// compile with debug symbols:
// g++ -g segfault2.cpp -o segfault2

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int arr[]={50, 60, 70};

    cout << arr[5000] << endl;

    return 0;
}