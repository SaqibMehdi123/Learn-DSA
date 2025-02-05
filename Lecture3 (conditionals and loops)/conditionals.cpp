#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Ways to write the conditionals

    // One way: if()

    /*

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    if(a > b){
        cout << "a is greater than b" << endl;
    }
    if(b > a) {
        cout << "b is greater than a" << endl;
    }

    */



    // Another way: nested conditionals
    /*

    cout << "Enter the value of a: ";
    cin >> a;

    if (a > 0) {
        cout << "a is positive";
    }
    else {
        if (a < 0) {
            cout << "a is negative";
        }
        else {
            cout << "a is zero";
        }
    }

    */


    // Another way: else if()
    
    cout << "Enter the value of a: ";
    cin >> a;

    if(a > 0){
        cout << "a is positive" << endl;
    }
    else if(a < 0){
        cout << "a is negative" << endl;
    }
    else{
        cout << "a is zero" << endl;
    }

    return 0;
}