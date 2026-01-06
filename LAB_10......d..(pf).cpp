#include <iostream>
using namespace std;
int main() {
    int n;
    unsigned long long factorial = 1; 
    int i = 1; 

    cout << "Enter a number: ";
    cin >> n;

    while (i <= n) {
        factorial = factorial * i; 
        i++; 
    }

    cout << "Factorial of " << n << " = " << factorial << endl;

    return 0;
}

