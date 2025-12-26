#include <iostream>
using namespace std;

int main() {
    float units, bill = 0;
    const float normalRate = 5, higherRate = 10, taxRate = 0.29, maintenanceFee = 39;
    const float allowedUsage = 200; // allowed monthly usage in units

    cout << "Enter electricity units consumed: ";
    cin >> units;

    if (units <= allowedUsage) {
        bill = units * normalRate;
    } else {
        bill = units * higherRate * (1 + taxRate);
    }

    bill += maintenanceFee;

    cout << "Total electricity bill: $" << bill << endl;
    return 0;
}


