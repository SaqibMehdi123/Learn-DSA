#include <iostream>
using namespace std;

// counting the number of bits in two numbers a and b
int countBits(int a, int b) {
    int count = 0;
    int rem_a, rem_b;

    while(a != 0 || b != 0) {
        rem_a = a % 2;
        rem_b = b % 2;

        if(rem_a == 1) {
            count++;
        }
        
        if(rem_b == 1) {
            count++;
        }

        a = a / 2;
        b = b / 2;
    }

    return count;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    int result = countBits(a, b);
    cout << "The total number of bits are: " << result << endl;

    return 0;
}