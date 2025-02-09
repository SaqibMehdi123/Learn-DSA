#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    // Using for loop to print the pattern

    cout << "Using for loop to print the pattern" << endl;
    for(int i = 0; i < num; i++){
        for(int j = 0; j < num; j++){
            cout << "* ";
        }
        cout << endl;
    }

    // Using while loop to print the pattern

    cout << "Using while loop to print the pattern" << endl;
    int k = 0;
    while(k < num){
        int l = 0;
        while(l < num){
            cout << "* ";
            l++;
        }
        cout << endl;
        k++;
    }

    return 0;
}