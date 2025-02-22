#include <iostream>
using namespace std;

int main() {
    int amount;
    cout << "Enter the amount: ";
    cin >> amount;

    cout << "<<<<<<<<<<<< Note Counter Menu >>>>>>>>>>>>" << endl;
    cout << "1. 100 notes" << endl;
    cout << "2. 50 notes" << endl;
    cout << "3. 20 notes" << endl;
    cout << "4. 10 notes" << endl;
    cout << "5. 5 notes" << endl;
    cout << "6. 1 notes" << endl;
    cout << endl;

    char choice;
    cout << "Enter the choice to count number of notes: ";
    cin >> choice;

    switch(choice) {
        case '1':
            cout << "Number of 100 notes: " << amount / 100 << endl;
            break;
        case '2':
            cout << "Number of 50 notes: " << amount / 50 << endl;
            break;
        case '3':
            cout << "Number of 20 notes: " << amount / 20 << endl;
            break;
        case '4':
            cout << "Number of 10 notes: " << amount / 10 << endl;
            break;
        case '5':
            cout << "Number of 5 notes: " << amount / 5 << endl;
            break;
        case '6':
            cout << "Number of 1 notes: " << amount / 1 << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}