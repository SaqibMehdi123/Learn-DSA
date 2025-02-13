#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1;
    char ch;
    while(i <= n){
        int j = 1;
        ch = 'A' + n - i;
        while(j <= i) {
            cout << char(ch + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}