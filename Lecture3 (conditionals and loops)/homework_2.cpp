#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int i = 1, sum = 0;

    while(i <= n){
        if(i % 2 == 0){
            sum += i;
        }

        i += 1;
    }

    cout << "Sum of even numbers from 1 to " << n << " = " << sum << endl;

    return 0;
}