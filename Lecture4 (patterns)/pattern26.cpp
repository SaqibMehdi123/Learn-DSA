#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = n;
    while(i >= 1) {
        int count1 = 1;
        int space = 1;
        while(space <= i - 1){
            cout << " ";
            space++;
        }
        int j = 1;
        while(j <= n - i + 1) {
            cout << count1++;
            j++;
        }

        int count2 = n - i;
        while(count2) {
            cout << count2;
            count2--;
        }

        cout << endl;
        i--;
    }
}