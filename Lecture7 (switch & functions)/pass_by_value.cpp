#include <iostream>
using namespace std;

/*
    Pass by value:
    - The value of the variable is passed to the function.
    - The function creates a copy of the variable.
    - Any changes made to the variable inside the function will not affect the original variable.
*/

void dummy(int num) {
    num++;
    cout << "The number inside the fucntion is: " << num << endl;
}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    dummy(num);

    cout << "The number is: " << num << endl;

    return 0;
}