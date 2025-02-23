#include <iostream>
using namespace std;

/*
bool isEven(int number) {
    if(number % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}
*/

bool isEven(int number) {
    if(number & 1) {
        return false;
    }
    else {
        return true;
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool result = isEven(number);

    if(result) {
        cout << "The number is even." << endl;
    }
    else {
        cout << "The number is odd." << endl;
    }

    return 0;
}