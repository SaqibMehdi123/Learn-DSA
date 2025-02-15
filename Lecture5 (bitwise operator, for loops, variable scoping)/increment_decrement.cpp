#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Value of a: " << a << endl;
    
    cout << "Prefix Increment: " << ++a << endl;
    cout << "Value of a after prefix increment: " << a << endl;

    cout << "Postfix Increment: " << a++ << endl;
    cout << "Value of a after postfix increment: " << a << endl;

    cout << "Postfix Decrement: " << a-- << endl;
    cout << "Value of a after postfix decrement: " << a << endl;

    cout << "Prefix Decrement: " << --a << endl;
    cout << "Value of a after prefix decrement: " << a << endl;

    return 0;
}