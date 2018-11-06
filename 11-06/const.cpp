#include <iostream>
using namespace std;

const double pi = 3.14; // consts cannot be changed
// double pi = 3.14;
// ^ if I did that, I could change pi to be 3.15 later


// const int arr[]: arr is an array of int constants
int good_sum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5; // also also not allowed

    return sum;
}

// this is another completely valid way to pass along arrays
int good_sum2(const int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5; // also also also not allowed

    return sum;
}

int bad_sum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    arr[0] = 5;

    return sum;
}

void test_passing_constants(double d) {}

void test_passing_constants_2(double *d) {}

int main(int argc, char *argv[])
{
    const double e = 2.72;

    pi = 3.1415; // not allowed
    e = 2.7183;  // also not allowed

    int arr[] = {1,2,3};

    test_passing_constants(pi);

    test_passing_constants_2(&pi);

    return 0;
}