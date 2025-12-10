#include <iostream>
using namespace std;
int main()
 {
    const int burgerPrice = 350;
    const int drinkPrice = 120;
    const int friesPrice = 150;
    int total = (2 * burgerPrice) + (1 * drinkPrice) + (1 * friesPrice);
    cout << "---- Café Bill ----" << endl;
    cout << "2 Burgers  = " << 2 * burgerPrice << endl;
    cout << "1 Drink    = " << drinkPrice << endl;
    cout << "1 Fries    = " << friesPrice << endl;
    cout << "Total Bill = " << total << " PKR" << endl;
return 0;
}

