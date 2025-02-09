#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    if (n == 2) {
        cout << "2 is a prime number" << endl;
        return 0;
    }

    if (n % 2 == 0) {
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    bool isPrime = true;
    int limit = sqrt(n);

    for (int i = 3; i <= limit; i += 2) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << n << " is a prime number" << endl;
    } else {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}
