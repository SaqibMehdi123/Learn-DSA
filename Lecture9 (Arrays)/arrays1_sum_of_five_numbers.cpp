#include <iostream>
using namespace std;

int main() {
    // user-defined data type
    // array: collection of data of similar data type
    // contiguous (sequential) memory allocation and fixed size
    
    // syntax: data_type array_name[size];
    // e.g: int arr[5];

    // using index we can access any element of the array
    // index starts from 0
    // syntax to access an element: arr[index]
    // e.g: arr[0], arr[1], arr[2], arr[3], arr[4]

    // a large number of values are stored in a single variable
    // to perform operation on large set of data
    // e.g: find the max number in a set of 10000 numbers
    // e.g: find the sum of all numbers in a set of 10000 numbers

    int arr[5] = {1, 2, 3, 4, 5};

    int sum = 0;
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }

    cout << "The sum of the array is: " << sum << endl;

    return 0;
}