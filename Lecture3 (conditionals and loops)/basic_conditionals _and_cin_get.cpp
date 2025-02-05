#include <iostream>

using namespace std;

int main() {
    /*
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Value of n = " << n << endl;

    if(n > 0) {
        cout << "n is positive" << endl;
    }
    else {
        cout << "n is negative (not positive)" << endl;
    }
    */

   int a, b;
//    cout << "Enter two numbers: ";
//    cin >> a >> b;

    a = cin.get();
    b = cin.get();

   cout << "Value of a and b is: " << a << " " << b << endl;

    return 0;
}