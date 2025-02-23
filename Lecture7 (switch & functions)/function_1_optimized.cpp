#include <iostream>
using namespace std;

int power() {
    int base;
    cout << "Enter the base: ";
    cin >> base;

    int pow;
    cout << "Enter the power: ";
    cin >> pow;

    int answer = 1;

    for(int i = 0; i < pow; i++) {
        answer = answer * base;
    }

    return answer;
}

int main() {
    // Function --> block of that performs a specific task
    // Function helps in code reusability, modularity, readability, and maintainability
    // Function helps in avoiding the repetition of code
    // Function helps in debugging the code

    /*
        Syntax:
            return_type function_name(parameters) {
                code -----------------
                ----------------------
                return value;
            }
    */

    int result = power();
    cout << "Result: " << result << endl;
    cout << endl;

    result = power();
    cout << "Result: " << result << endl;
    cout << endl;

    result = power();
    cout << "Result: " << result << endl;
    cout << endl;

    return 0;
}