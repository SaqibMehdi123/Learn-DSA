#include <iostream>
using namespace std;

int main() {
    int a, b;
    int choice;
    int result;
    char exitChoice;

    do {
        cout << "Enter the value of a: ";
        cin >> a;
        cout << "Enter the value of b: ";
        cin >> b;

        do {
            cout << "<<<<<< Bitwise Menu >>>>>>" << endl;
            cout << "1. AND Operation" << endl;
            cout << "2. OR Operation" << endl;
            cout << "3. NOT Operation" << endl;
            cout << "4. XOR Operation" << endl;
            cout << "5. End the Program" << endl;

            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    result = a & b;
                    cout << "AND Operation on " << a << " and " << b << " = " << result << endl << endl;
                    break;

                case 2:
                    result = a | b;
                    cout << "OR Operation on " << a << " and " << b << " = " << result << endl << endl;
                    break;

                case 3: {
                    int choice1;
                    cout << "1. ~a" << endl;
                    cout << "2. ~b" << endl;
                    cout << "Enter your choice to negate: ";
                    cin >> choice1;

                    if (choice1 == 1) {
                        result = ~a;
                        cout << "NOT Operation on a (" << a << ") = " << result << endl << endl;
                    } else if (choice1 == 2) {
                        result = ~b;
                        cout << "NOT Operation on b (" << b << ") = " << result << endl << endl;
                    } else {
                        cout << "Invalid choice for NOT operation." << endl << endl;
                    }
                    break;
                }

                case 4:
                    result = a ^ b;
                    cout << "XOR Operation on " << a << " and " << b << " = " << result << endl << endl;
                    break;

                case 5:
                    cout << "Ending the Program" << endl << endl;
                    break;

                default:
                    cout << "Invalid choice! Please try again." << endl << endl;
            }

        } while (choice != 5);

        cout << "Do you want to exit the program? (y/n): ";
        cin >> exitChoice;

    } while (exitChoice != 'y' && exitChoice != 'Y');

    return 0;
}
