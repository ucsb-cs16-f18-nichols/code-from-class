#include <iostream>
using namespace std;

// return the index of the value; -1 otherwise
int binarySearch(int arr[], int length, int value) {
    // keep searching in the middle of our "sub-array"

    // start out searching the entire array
    int beginning = 0;
    int end = length-1;

    while (beginning <= end) {
        int mid = (beginning + end) / 2;
        if (arr[mid] == value) {
            return mid; // we found it!
        } else if (value > arr[mid]) {
            // value was bigger; look to the right half of the array
            beginning = mid + 1; // now I have a smaller array to work with
        } else {
            // value < arr[mid]
            // value was smaller; look to the left half of the array
            end = mid - 1;
        }
    }

    // if we broke out of this loop without returning, the value wasn't
    // there
    return -1;
}

int main(int argc, char *argv[])
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80};

    cout << binarySearch(arr, 8, 70) << endl;

    cout << binarySearch(arr, 8, 12) << endl;

    return 0;
}

