#include <iostream>
using namespace std;

int main() {
    // can also use the way we did in pattern19
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = n;
    int count = 1;
    while(i >= 1) {
        int space = 1;
        while(space <= i - 1){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= n - i + 1) {
            cout << count++;
            j++;
        }
        cout << endl;
        i--;
    }
}