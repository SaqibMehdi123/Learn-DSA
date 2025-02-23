#include <iostream>
using namespace std;

int main() {
    int base, power;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the power: ";
    cin >> power;

    int answer = 1;

    for(int i = 0; i < power; i++) {
        answer = answer * base;
    }

    cout << "Result: " << answer << endl;

    return 0;
}