#include <iostream>
#include <cstdlib> // for rand()
#include <ctime> // for time()
using namespace std;

void initializeArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int checkMin(int arr[], int size) {
    int minimum = arr[0];
    for(int i = 0; i < size; i++) {

        // minimum = min(minimum, arr[i]);

        if(minimum > arr[i]) {
            minimum = arr[i];
        }
    }
    return minimum;
}

int checkMax(int arr[], int size) {
    int maximum = arr[0];
    
    for(int i = 0; i < size; i++) {

        // maximum = max(maximum, arr[i]);

        if(maximum < arr[i]) {
            maximum = arr[i];
        }
    }
    return maximum;
}

int main() {
    srand(time(NULL));
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    initializeArray(arr, size);

    cout << "The elements of the array are: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int smallest = checkMin(arr, size);
    cout << "The smallest number in the array is: " << smallest << endl;

    int largest = checkMax(arr, size);
    cout << "The largest number in the array is: " << largest << endl;

    return 0;
}