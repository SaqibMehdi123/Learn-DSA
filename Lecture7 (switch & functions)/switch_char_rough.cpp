#include <iostream>
using namespace std;

int main() {

    // This is the code done by code help by love babbar
    
    char ch = '1';

    switch(ch) {
        case 1:
            cout << "First" << endl;
            break;

        case '1':
            cout << "character one" << endl;
            break;

        default:
            cout << "Invalid character" << endl;
            break;
    }

    return 0;
}