#include <iostream>
using namespace std;
int main() {
    float fuel;
    cout << "Enter current fuel level (in liters): ";
    cin >> fuel;
    fuel -= 2;
    cout << "Fuel after one trip: " << fuel;
    return 0;
}

