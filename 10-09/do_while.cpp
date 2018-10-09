#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    int n(5); // this sets n to be 5 (weird notation)

    int x = 0; 
    do{
      cout<< x<< endl;
      x++;
    } while(x < n);

    return 0;
}