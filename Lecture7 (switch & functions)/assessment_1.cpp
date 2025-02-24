#include <iostream>
using namespace std;

void update(int num) {
    num = num / 2;
}
int main() {
    int num = 10;
    update(num);
    cout << "The number is: " << num << endl;
    // Output: The number is: 10

    return 0;
}