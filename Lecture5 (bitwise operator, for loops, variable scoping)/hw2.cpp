#include <iostream>
using namespace std;

int main() {
    int a, b = 1;
    a = 10;

    if(++a) {
        cout << "(if) b = " << b;
    }
    else {
        cout << "(else) b = " << ++b;
    }

    return 0;
}