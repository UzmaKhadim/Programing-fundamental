#include <iostream>
using namespace std;

int main() {
    int numbers[5];  
    int sum = 0;     
    cout << "Enter 5 numbers: " << endl;
    for(int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    for(int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    cout << "The sum of the 5 numbers is: " << sum << endl;

    return 0;
}
