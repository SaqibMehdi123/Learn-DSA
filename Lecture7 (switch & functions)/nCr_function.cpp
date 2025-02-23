#include <iostream>
using namespace std;

int nCr_function(int n, int r) {

    int ans_n = 1;
    int ans_r = 1;
    int ans_n_r = 1;

    for(int i = 1; i <= n; i++) {
        ans_n = ans_n * i;
    }

    for(int i = 1; i <= r; i++) {
        ans_r = ans_r * i;
    }

    int n_r = n - r;
    for(int i = 1; i <= n_r; i++) {
        ans_n_r = ans_n_r * i;
    }

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