#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int value, no_of_shifts, result, choice;

    cout << "Enter the value: ";
    cin >> value;

    cout << "Enter the number of shifts: ";
    cin >> no_of_shifts;

    cout << "1. Left Shift ----> (value * pow(2, no_of_shifts))" << endl;
    cout << "2. Right Shift ----> (value / pow(2, no_of_shifts))" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    cout << endl;

    switch(choice) {
        case 1:
            result = value << no_of_shifts;
            cout << "Left Shift Using Shift Operator  -- (" << value << " << " << no_of_shifts << ") = " << result << endl;
            cout << "Left Shift Using Formula -- (" << value << " << " << no_of_shifts << ") = " << (value * pow(2, no_of_shifts)) << endl;
            break;
        case 2:
            result = value >> no_of_shifts;
            cout << "Right Shift Using Shift Operator -- (" << value << " >> " << no_of_shifts << ") = " << result << endl;
            cout << "Right Shift Using Formula -- (" << value << " >> " << no_of_shifts << ") = " << (value / pow(2, no_of_shifts)) << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}