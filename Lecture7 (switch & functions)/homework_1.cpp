#include <iostream>
using namespace std;

int ap(int n) {
    return 3 * n + 7;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = ap(num);
    cout << "The result is: " << result << endl;
    
    return 0;
}