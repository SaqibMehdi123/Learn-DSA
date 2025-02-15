#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Printing the numbers from 1 to n:" << endl;

    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    return 0;
}