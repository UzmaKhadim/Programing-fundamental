#include <iostream>
using namespace std;

int main() {
    int number, limit;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
