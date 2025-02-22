#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Mini Calculator Menu" << endl;
    cout << "1. Addition +" << endl;
    cout << "2. Subtraction -" << endl;
    cout << "3. Multiplication *" << endl;
    cout << "4. Division /" << endl;
    cout << "5. Remainder %" << endl;

    cout << endl;

    char operation;
    cout << "Enter the operation symbol: ";
    cin >> operation;

    cout << endl;

    switch(operation) {
        case '+':
            cout << "Addition of " << num1 << " and " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << "Subtraction of " << num1 << " and " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Multiplication of " << num1 << " and " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << "Division of " << num1 << " and " << num2 << " = " << num1 / num2 << endl;
            break;
        case '%':
            cout << "Remainder of " << num1 << " and " << num2 << " = " << num1 % num2 << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
            break;
    }

    return 0;
}