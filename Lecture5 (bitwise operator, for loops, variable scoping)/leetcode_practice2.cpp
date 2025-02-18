#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int count = 0, rem;
    while (n > 0) {
        rem = n % 2;
        if (rem == 1) {
            count++;
        }
        n = n / 2;
    }

    cout << "The number of 1's in the binary representation of the given number is: " << count << endl;

    return 0;
}