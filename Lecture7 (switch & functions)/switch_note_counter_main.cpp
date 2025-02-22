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

    cout << endl;

    switch(choice) {
        case '1':
            cout << "Number of 100 notes: " << amount / 100 << endl;
            amount = amount - (amount / 100 * 100);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            if (amount == 0) break;

        case '2':
            cout << "Number of 50 notes: " << amount / 50 << endl;
            amount = amount - (amount / 50 * 50);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            if (amount == 0) break;

        case '3':
            cout << "Number of 20 notes: " << amount / 20 << endl;
            amount = amount - (amount / 20 * 20);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            if (amount == 0) break;

        case '4':
            cout << "Number of 10 notes: " << amount / 10 << endl;
            amount = amount - (amount / 10 * 10);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            if (amount == 0) break;

        case '5':
            cout << "Number of 5 notes: " << amount / 5 << endl;
            amount = amount - (amount / 5 * 5);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            if (amount == 0) break;

        case '6':
            cout << "Number of 1 notes: " << amount / 1 << endl;
            amount = amount - (amount / 1 * 1);
            cout << "Remaining amount: " << amount << endl;
            cout << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
    }

    return 0;
}