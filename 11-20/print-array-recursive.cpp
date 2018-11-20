#include <iostream>
using namespace std;

// assume we're always given an array of size at least 1
// to start
void print_array_recursively(int arr[], int size) {
    // we need a base case and a recursive case

    // the base case is something we know how to solve 
    // immediately
    if (size == 1) {
        cout << arr[0] << endl;
    } else {
        // recursive case:
        // the array is an element, followed by a 
        // smaller array

        cout << arr[0] << endl;

        // we get to assume that this recursive call 
        // works, *as long as* we use its solution
        // to build up the final, bigger solution properly
        print_array_recursively(arr+1, size-1);

        // if the cout statement was here, we'd
        // print the array contents backwards

        // tail-call recursion is possible here
    }
}

void print_array_recursively2(int arr[], int size) {
    if (size == 1) {
        cout << arr[0] << endl;
        // this is the base case
        // it DOES NOT have any recursive calls in it
    } else {
        // recursive case:
        // the array is a smaller array, followed by 
        // the last element

        // print out all elements except last
        print_array_recursively(arr, size-1);
        // print out the last element
        cout << arr[size-1] << endl;
    }
}

int main(int argc, const char *argv[])
{
    int arr[] = {8,6,7,5,3,0,9};

    print_array_recursively(arr, 7);
    print_array_recursively2(arr, 7);
    
    return 0;
}