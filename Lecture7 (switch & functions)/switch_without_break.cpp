#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    // It executes all the cases after the matching case

    switch(ch) {
        case '1':
            cout << "First" << endl;
        case '2':
            cout << "Second" << endl;
        default:
            cout << "Invalid character" << endl;
    }

    return 0;
}