#include <iostream>
using namespace std;
int main()
 {
    float balance, recharge;
    cout << "Enter current balance: ";
    cin >> balance;
    cout << "Enter recharge amount: ";
    cin >> recharge; 
    balance += recharge + (recharge * 0.10);
    cout << "Updated balance: " << balance;
return 0;
}
