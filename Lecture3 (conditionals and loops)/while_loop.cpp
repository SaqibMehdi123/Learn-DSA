#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter ther number: ";
    cin >> n;

    int i = 1;

    /*

    while(i <= n){
        cout << i << " ";
        i += 1; 
    }

    */

   int sum = 0;
   while(i <= n){
        sum = sum + i;
        i += 1;
   }

   cout << "Sum of numbers from " << i << " to " << n << " = " << sum << endl;

    return 0;
}