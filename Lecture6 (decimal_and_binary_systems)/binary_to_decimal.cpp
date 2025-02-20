#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the binary number: ";
    cin >> n;
    int temp = n;
    int power = 0, rem, decimal = 0;

    while(n != 0) {
        rem = n % 10;
        if(rem == 1) {
            decimal = decimal + pow(2, power);
        }
        power++;
        n = n / 10;
    }

    cout << "Decimal equivalent of " << temp << ": " << decimal << endl;

    return 0;
}