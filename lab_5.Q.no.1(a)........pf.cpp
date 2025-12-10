#include <iostream>
using namespace std;
int main()
 {
    float attendance;
    bool feePaid;
    cout << "Enter attendance percentage: ";
    cin >> attendance;
    cout << "Has the fee been paid? (1 for Yes, 0 for No): ";
    cin >> feePaid;
    cout << ((attendance >= 75 && feePaid) ? "Eligible" : "Not Eligible");

    return 0;
}

