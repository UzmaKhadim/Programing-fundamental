#include <iostream>
using namespace std;

int main() {
    float salary, newSalary;
    int yearsOfService;

    cout << "Enter current salary: $";
    cin >> salary;
    cout << "Enter years of service: ";
    cin >> yearsOfService;

    if (yearsOfService >= 5) {
        float increment;
        if (yearsOfService >= 15) {
            increment = salary * 0.15; // 15% increment
        } else if (yearsOfService >= 10) {
            increment = salary * 0.10; // 10% increment
        } else {
            increment = salary * 0.05; // 5% increment
        }
        newSalary = salary + increment;
        cout << "New salary: $" << newSalary << endl;
    } else {
        cout << "No increment. Current salary: $" << salary << endl;
    }

    return 0;
}
