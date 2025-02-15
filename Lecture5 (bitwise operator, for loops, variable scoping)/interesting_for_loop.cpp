#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 0;
    for(;;) {
        if(i < n) {
            cout << i << " ";
        }
        else {
            break;
        }
        i++;
    }

    return 0;
}