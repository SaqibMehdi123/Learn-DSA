#include <iostream>
using namespace std;

int main() {

    // to initialize all elements of an array to 0
    // syntax: data_type array_name[size] = {0};
    // int arr[10] = {0};

    // can we initialize whole array with any other value?
    // we can initialize whole array only with zero but we can initialize a single element with any value
    // initialization like the zero to whole array is not done in case of any other value
    // e.g: int arr[10] = {5}; ---> only first element will be 5 and rest will be 0

    // example
    int arr1[10] = {0};
    for(int i = 0; i < 10; i++) {
        cout << arr1[i] << " ";
    }

    cout << endl << endl;

    // another example
    int arr2[15] = {2, 7, 0};
    int size = sizeof(arr2) / sizeof(arr2[0]);

    for(int i = 0; i < size; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}