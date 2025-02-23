#include <iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int nCr_function(int n, int r) {
    int ans_n = factorial(n);
    int ans_r = factorial(r);
    int ans_n_r = factorial(n - r);

    int result = ans_n / (ans_r * ans_n_r);
    return result;
}

int main() {
    int n, r;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Enter the value of r: ";
    cin >> r;

    int result = nCr_function(n, r);
    cout << n << "C" << r << " = " << result << endl;

    return 0;
}