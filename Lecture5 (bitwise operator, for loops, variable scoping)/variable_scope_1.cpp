#include <iostream>
using namespace std;

int main() {

    // Variable scope determines where a variable can be accessed or modified in your program.
    // We can initialize a variable with the same name in different scopes but not in the same scope.
    // The variable declared in the inner block is only accessible in that block and not outside that block.
    // The variable declared in the outer block is accessible in the outside block as well as in the inner block but if in the inner block variable of same name is initialized then the inner block variable will be used not the outer one.

    if(true) {
        int b = 2; // accessible in the inner block where b = 5
        if(true) {
            int b = 5; // also accessible in the inner block where b = 3
            if(true) {
                int b = 3; // accessible in the inner block where b = 3 (local scope --> not accessible outside)
            }
        }
    }

    int a = 3; // outer block variable
    cout << "(outer) a = " << a << endl;

    if(true) {
        int a = 5; // inner block variable (local scope and is not accessible outside this if block)
        cout << "(inner) a = " << a << endl;
    }

    cout << "(outer) a = " << a << endl; // outer block variable will be printed in this cout statement

    if(true) {
        int b = 6;
        cout << "(inner) b = " << b << endl;
    }
    
    // cout << b << endl; // b is not accessible outside the 'if' block

    // if I declare 'b' outside the 'if' block, then it will be accessible outside the if block
    int b = 8;
    cout << "(outer) b = " << b << endl;

    // int b = 9; // this is wrong as 'b' is already declared above

    int i = 4; // outer block variable 'i'
    for(int i = 0; i < 8; i++) { // inner block variable 'i'
        cout << "Hi" << endl;
    }
    cout << " " << endl;
    for(; i < 8; i++) { // outer block variable 'i = 8' will be used as we did not declared any variable 'i' in this for loop
        cout << "Hi" << endl;
    }

    return 0;
}