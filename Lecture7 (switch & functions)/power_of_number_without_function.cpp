#include <iostream>
using namespace std;

int main() {

    // performing the same operation multiple times without using the function
    // this is not a good practice as our program is getting bulky and we are repeating the same code multiple times
    // such type of code is not readable and also not maintainable
    // we should use functions to avoid this

    // pow(a, b)

    int a, b;
    cout << "Enter the base: ";
    cin >> a;
    cout << "Enter the power: ";
    cin >> b;

    int answer = 1;

    for(int i = 0; i < b; i++) {
        answer = answer * a;
    }

    cout << "Result: " << answer << endl;
    cout << endl;

    int c, d;
    cout << "Enter the base: ";
    cin >> c;
    cout << "Enter the power: ";
    cin >> d;

    answer = 1;

    for(int i = 0; i < d; i++) {
        answer = answer * c;
    }

    cout << "Result: " << answer << endl;
    cout << endl;

    int e, f;
    cout << "Enter the base: ";
    cin >> e;
    cout << "Enter the power: ";
    cin >> f;

    answer = 1;

    for(int i = 0; i < f; i++) {
        answer = answer * e;
    }

    cout << "Result: " << answer << endl;
    cout << endl;

    return 0;
}