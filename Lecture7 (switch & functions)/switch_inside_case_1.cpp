#include <iostream>
using namespace std;

int main() {
    int ch = '1';
    int num = 1;

    switch(ch) {
        case 1:
            cout << "First" << endl;
            cout << "First Again" << endl;
            break;
        case '1':
            switch(num) {
                case 1:
                    cout << "Value of num = " << num << endl;
                    break;
            }
            break;
        default:
            cout << "Invalid choice" << endl;
    }

    return 0;
}