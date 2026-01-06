#include <iostream>
using namespace std;
int main() {
    int choice;
    float amount, converted;
    cout << "Currency Converter\n";
    cout << "1. USD to PKR\n";
    cout << "2. USD to Pound\n";
    cout << "3. USD to Euro\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cout << "Enter amount in USD: ";
    cin >> amount;
    switch (choice) {
        case 1:
            converted = amount * 280;  
            cout << "Amount in PKR: " << converted;
            break;
        case 2:
            converted = amount * 0.79;  
            cout << "Amount in Pound: " << converted;
            break;
        case 3:
            converted = amount * 0.92;  // USD to Euro
            cout << "Amount in Euro: " << converted;
            break;
        default:
            cout << "Invalid Choice!";
    }

    return 0;
}
