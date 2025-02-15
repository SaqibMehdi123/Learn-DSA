#include <iostream>
using namespace std;

int main() {
    int a = 1, b = 2;

    if(a-- && ++b > 2) {
        cout << "Stage1 - Inside If" << endl;
    }
    else {
        cout << "Stage1 - Inside Else" << endl;
    }
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}