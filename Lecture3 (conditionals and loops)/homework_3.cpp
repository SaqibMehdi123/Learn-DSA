#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool isPrime = true;

    int i;

    if(n <= 1) {
        cout << n << " is not a prime number" << endl;
        return 0;
    }

    int limit = sqrt(n);
    for (i = 2; i < limit; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }

    return 0;
}