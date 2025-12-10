#include <iostream>
using namespace std;
int main()
 {
    float purchaseAmount;
    bool hasMembershipCard;
    cout << "Enter purchase amount: ";
    cin >> purchaseAmount;
    cout << "Do you have a membership card? (1 for Yes, 0 for No): ";
    cin >> hasMembershipCard;
    cout << ((purchaseAmount > 5000 || hasMembershipCard) ? "Discount Applied" : "No Discount");
    return 0;
}

