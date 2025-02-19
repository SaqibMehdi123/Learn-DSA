#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int temp = n;

    int rem, binary = 0;
    int count = 0;

    while(n != 0) {
        rem = n % 2;
        binary =  binary + rem * pow(10, count);
        n = n / 2;
        count++;
    }

    cout << "Binary equivalent of " << temp << ": " << binary << endl;

    return 0;
}