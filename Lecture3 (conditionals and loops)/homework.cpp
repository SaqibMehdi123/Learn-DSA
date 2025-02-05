#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter the character: ";
    cin >> ch;

    if(ch >= 'A' && ch <= 'Z'){
        cout << ch << " is uppercase character" << endl;
    }
    else if(ch >= 'a' && ch <= 'z'){
        cout << ch << " is lowercase character" << endl;
    }
    else if(ch >= '0' && ch <= '9'){
        cout << ch << " is numeric character" << endl;
    }

    return 0;
}