#include <iostream>
using namespace std;
int main()
 {
    int burgerPrice = 350;
    int drinkPrice = 120;
    int friesPrice = 150;
    int burgers = 2;
    int drinks = 1;
    int fries = 1;
    int totalBill = (burgers * burgerPrice) + (drinks * drinkPrice) + (fries * friesPrice);
    float tax = totalBill * 0.07;
    float finalAmount = totalBill + tax;
    int totalItems = burgers + drinks + fries;
    float averageCost = finalAmount / totalItems;
    cout << "Total Bill: " << totalBill << " PKR" << endl;
    cout << "Sales Tax (7%): " << tax << " PKR" << endl;
    cout << "Final Amount: " << finalAmount << " PKR" << endl;
    cout << "Average Cost per Item: " << averageCost << " PKR" << endl;
    return 0;
}


