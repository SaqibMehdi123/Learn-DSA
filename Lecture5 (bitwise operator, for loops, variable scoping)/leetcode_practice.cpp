#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int product = 1;
        int difference, rem;
        int sum = 0;

        while(n > 0) {
            rem = n % 10;
            n = n / 10;
            sum += rem;
            product *= rem;
        }

        difference = product - sum;
        cout << "The Difference of product(" << product << ") and sum(" << sum << ")" << difference;

    return 0;
}