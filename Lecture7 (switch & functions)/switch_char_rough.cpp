#include <iostream>
using namespace std;

int main() {

    // This is the code done by code help by love babbar

    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    switch(ch) {
        case '1':
            cout << "First" << endl;
            break;

        case '2':
            cout << "second" << endl;
            break;

        default:
            cout << "Invalid character" << endl;
            break;
    }

    return 0;
}