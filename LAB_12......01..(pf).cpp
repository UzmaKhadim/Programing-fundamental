#include <iostream>
using namespace std;
double calculateBonus(double salary, int rating) {
    double bonus = 0.0;

    if (rating == 5) {
        bonus = 0.20 * salary;  
    } else if (rating == 4) {
        bonus = 0.10 * salary;  
    } else if (rating == 3) {
        bonus = 0.05 * salary;  
    } else {
        bonus = 0.0;           
    }
    return bonus;
}
void displayBonus(double salary, double bonus) {
    double finalSalary = salary + bonus;
    cout << "Bonus Amount: $" << bonus << endl;
    cout << "Final Salary: $" << finalSalary << endl;
}
int main() {
    double salary;
    int rating;
    cout << "Enter employee's salary: $";
    cin >> salary;
    cout << "Enter employee's performance rating (1-5): ";
    cin >> rating;
    double bonus = calculateBonus(salary, rating);
    displayBonus(salary, bonus);
    return 0;
}
