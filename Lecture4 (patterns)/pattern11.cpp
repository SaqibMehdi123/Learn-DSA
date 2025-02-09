#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int i = 1;
    char ch = 'A';

    /*

    while(i <= num){
        int j = 1;
        while(j <= num){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        ch++;
        i++;
    }

    */
    
    // Another way to solve the problem

    while(i <= num){
        ch = 'A' + i - 1;
        int j = 1;
        while(j <= num){
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}