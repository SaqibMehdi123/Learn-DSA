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
        while(j <= n) {
            cout << char(ch + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}