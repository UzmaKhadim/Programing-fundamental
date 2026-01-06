#include <iostream>
using namespace std;

int main() {
    int popA, popB;
    float rateA, rateB;
    int years;

    cout << "Enter population of town A: ";
    cin >> popA;
    cout << "Enter growth rate of town A (%): ";
    cin >> rateA;

    cout << "Enter population of town B: ";
    cin >> popB;
    cout << "Enter growth rate of town B (%): ";
    cin >> rateB;

    for (years = 0; popA < popB; years++) {
        popA = popA + (popA * rateA / 100);
        popB = popB + (popB * rateB / 100);
    }

    cout << "After " << years << " years:" << endl;
    cout << "Population of town A = " << popA << endl;
    cout << "Population of town B = " << popB << endl;

    return 0;
}
