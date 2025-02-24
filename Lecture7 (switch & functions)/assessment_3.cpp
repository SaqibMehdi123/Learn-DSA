#include <iostream>
using namespace std;

int update(int num) {
    int ans = num * num;
    return ans;
}

int main() {
    int num = 14;
    num = update(num);
    cout << "The number is: " << num << endl;
    // Output: The number is: 196

    return 0;
}