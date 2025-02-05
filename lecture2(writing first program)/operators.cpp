#include <iostream>
using namespace std;

int main(){
    cout << "Arithmetic Operators" << endl;

    int div = 2 / 5;
    cout << "using int => 2 / 5 = " << div << endl;

    float div1 = 2.0 / 5;
    cout << "using float => 2.0 / 5 = " << div1 << endl;

    double div2 = 2.0 / 5;
    cout << "using double => 2.0 / 5 = " << div2 << endl;

    cout << endl;

    cout << "Relational Operators" << endl;

    int a = 5;
    int b = 4;
    
    bool first = (a == b);
    cout << "a == b: " << first << endl;

    bool second = (a != b);
    cout << "a != b: " << second << endl;

    bool third = (a < b);
    cout << "a < b: " << third << endl;

    bool fourth = (a > b);
    cout << "a > b: " << fourth << endl;

    bool fifth = (a >= b);
    cout << "a >= b: " << fifth << endl;

    bool sixth = (a <= b);
    cout << "a <= b: " << sixth << endl;

    cout << endl;

    cout << "Logical Operators" << endl;

    int log = 0;
    cout << "!log: " << !log << endl;

    return 0;
}