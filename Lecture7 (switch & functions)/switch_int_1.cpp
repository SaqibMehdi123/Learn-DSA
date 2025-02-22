#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;

    switch(number) {
        case 1:
            cout << "First" << endl;
            break;
        case 2:
            cout << "Second" << endl;
            break;
        default:
            cout << "Invalid number" << endl;
            break;
    }

    return 0;
}