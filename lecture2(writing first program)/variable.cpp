#include <iostream>
using namespace std;

int main(){
    int a = 123;
    cout << "Integer Value (4 byte = 32 bits): " << a << endl;

    char ch = 'a';
    cout << "Char Value (1 byte = 8 bits): " << ch << endl;

    bool bl = true;
    cout << "Bool Value (1 byte = 8 bits): " << bl << endl;

    float f = 2.5;
    cout << "Float Value (4 byte = 32 bits): " << f << endl;

    double d = 3.62;
    cout << "Double Value (8 byte = 64 bits): " << d << endl;

    cout << endl;

    int size_int = sizeof(int);
    cout << "Size of int: " << size_int << " bytes" << endl;

    int size_char = sizeof(char);
    cout << "Size of char: " << size_char << " bytes" << endl;

    int size_bool = sizeof(bool);
    cout << "Size of bool: " << size_bool << " byte" << endl;

    int size_float = sizeof(float);
    cout << "Size of float: " << size_float << " bytes" << endl;

    int size_double = sizeof(double);
    cout << "Size of double: " << size_double << " bytes" << endl;

    cout << endl;

    int asc1 = 'a';
    cout << "ASCII Value of 'a': " << asc1 << endl;

    int asc2 = 'z';
    cout << "ASCII Value of 'z': " << asc2 << endl;

    int asc3 = 'A';
    cout << "ASCII Value of 'z': " << asc3 << endl;

    int asc4 = 'Z';
    cout << "ASCII Value of 'z': " << asc4 << endl;

    cout << endl;

    char ch1 = 98;
    cout << "Character of ASCII Value 98: " << ch1 << endl;

    char ch2 = 67;
    cout << "Character of ASCII Value 67: " << ch2 << endl;

    char ch3 = 116;
    cout << "Character of ASCII Value 116: " << ch3 << endl;

    char ch4 = 77;
    cout << "Character of ASCII Value 77: " << ch4 << endl;

    char ch5 = 62;
    cout << "Character of ASCII Value 62: " << ch5 << endl;

    cout << endl;

    char ch11 = 123456;
    cout << ch11 << endl;

    cout << endl;

    unsigned int a1 = 123;
    cout << "Unsigned Integer Value (4 byte = 32 bits): " << a1 << endl;

    unsigned int a2 = -123;
    cout << "Unsigned Integer Value (4 byte = 32 bits): " << a2 << endl;

    cout << endl;

    return 0;
}