#include <iostream>
using namespace std;

int main(){
    int i;
    cout << "Enter the number: ";
    cin >> i;

    while(i >= 1) {
        int j = 1;
        while(j <= i) {
            cout << "* ";
            j++;
        }
        cout << endl;
        i--;
    }

    return 0;
}