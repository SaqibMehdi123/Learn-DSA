#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "The size of the array is: " << size << endl;
    cout << "The elements of the array are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int size = 15;
    int arr1[size] = {1, 2, 3, 4, 5, 6, 7};
    size = sizeof(arr1) / sizeof(int);
    printArray(arr1, size);

    cout << endl << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    size = sizeof(arr2) / sizeof(int);
    printArray(arr2, size);

    return 0;
}