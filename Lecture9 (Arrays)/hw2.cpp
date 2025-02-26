#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }

    return 0;
}