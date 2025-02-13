#include <iostream>
using namespace std;

int main(){
    int n; 
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;
    char ch;
    while(i <= n) {
        ch = 'A' + i - 1;
        int j = 1;
        while(j <= i) {
            if (ch >= 'A' && ch <= 'Z') {
                cout << char(ch++) << " ";
            }
            else {
                break;
            }

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}