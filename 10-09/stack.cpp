#include <iostream>
#include <cstdlib> // now I can use atoi
using namespace std;

int sum(int a, int b){

    cout<< "a+b is " << a+b << endl;

    // UNDEFINED BEHAVIOR

}

int main(){

    int result =0;
    int x =10, y =20;
    result = sum(x, y);
    cout<<"result is " << result << endl;

    return 0;
}