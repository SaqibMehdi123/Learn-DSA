#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "💡 Welcome to the Vending Machine! 💡" << endl;
    cout << "-------------------------------------" << endl;
    cout << "1. FizzUp (Rs. 50)" << endl;
    cout << "2. Olper (Rs. 45)" << endl;
    cout << "3. Water (Rs. 30)" << endl;
    cout << "4. Juice (Rs. 60)" << endl;
    cout << "5. Chips (Rs. 40)" << endl;
    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "You selected FizzUp. Please pay Rs. 50." << endl;
            break;
        case 2:
            cout << "You selected Olper. Please pay Rs. 45." << endl;
            break;
        case 3:
            cout << "You selected Water. Please pay Rs. 30." << endl;
            break;
        case 4:
            cout << "You selected Juice. Please pay Rs. 60." << endl;
            break;
        case 5:
            cout << "You selected Chips. Please pay Rs. 40." << endl;
            break;
        default:
            cout << "❌ Invalid choice! Please enter a number between 1 and 5." << endl;
    }

    cout << "✅ Thank you for using the vending machine!" << endl;

    return 0;
}
