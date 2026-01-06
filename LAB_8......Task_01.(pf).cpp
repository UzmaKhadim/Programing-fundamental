#include <iostream>
using namespace std;
int main() {
    int category, item, quantity;
    float price = 0, total, discount = 0, finalAmount;
    cout << "Welcome to Shopping System\n";
    cout << "Select Category:\n";
    cout << "1. Electronics\n2. Clothing\n3. Groceries\n";
    cin >> category;
    switch (category) {
        case 1:
            cout << "Electronics:\n";
            cout << "1. Laptop ($1000)\n2. Smartphone ($700)\n3. Headphones ($150)\n";
            cin >> item;
            switch (item) {
                case 1: price = 1000; break;
                case 2: price = 700; break;
                case 3: price = 150; break;
                default:
                    cout << "Invalid Item!";
                    return 0;
            }
            break;
        case 2:
            cout << "Clothing:\n";
            cout << "1. Jacket ($120)\n2. T-shirt ($40)\n3. Jeans ($60)\n";
            cin >> item;
            switch (item) {
                case 1: price = 120; break;
                case 2: price = 40; break;
                case 3: price = 60; break;
                default:
                    cout << "Invalid Item!";
                    return 0;
            }
            break;
        case 3:
            cout << "Groceries:\n";
            cout << "1. Milk ($2)\n2. Bread ($3)\n3. Eggs ($5)\n";
            cin >> item;
            switch (item) {
                case 1: price = 2; break;
                case 2: price = 3; break;
                case 3: price = 5; break;
                default:
                    cout << "Invalid Item!";
                    return 0;
            }
            break;
        default:
            cout << "Invalid Category!";
            return 0;
    }

    cout << "Enter Quantity: ";
    cin >> quantity;
    total = price * quantity;
    if (total >= 100 && total <= 500)
        discount = total * 0.10;
    else if (total > 500)
        discount = total * 0.20;
    finalAmount = total - discount;
    cout << "\n----- INVOICE -----\n";
    cout << "Total Amount: $" << total << endl;
    cout << "Discount: $" << discount << endl;
    cout << "Amount to Pay: $" << finalAmount << endl;
    return 0;
}
