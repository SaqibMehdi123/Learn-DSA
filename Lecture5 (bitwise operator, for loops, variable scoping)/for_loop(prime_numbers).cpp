#include <iostream>
using namespace std;

int main() {
    int check;
    cout << "Enter the number to check if it is prime or not: ";
    cin >> check;

    if(check < 2) {
        cout << check << " is not a prime number." << endl;
        return 0;
    }

    bool isPrime = true;

    for(int i = 2; i * i <= check; i++) {
        if(check % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << check << " is a Prime number" << endl;
    }
    else {
        cout << check << " is not a prime number" << endl;
    }

    return 0;
}