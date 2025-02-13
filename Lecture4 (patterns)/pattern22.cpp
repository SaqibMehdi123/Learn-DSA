#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = n;
    while(i >= 1) {
        int count = n - i + 1;
        int space = 1;
        while(space <= n - i){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= i) {
            cout << count;
            j++;
        }
        cout << endl;
        i--;
    }
}