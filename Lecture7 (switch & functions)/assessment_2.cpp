#include <iostream>
using namespace std;

int update(int num) {
    num -= 5;
    return num;
}
int main() {
    int num =  10;
    update(num);
    cout << "The number is: " << num << endl;
    // Output: The number is: 10

    return 0;
}