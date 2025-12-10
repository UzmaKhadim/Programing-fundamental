#include <iostream>
using namespace std;
int main()
 {
    float originalPrice = 1200;
    float discountedPrice = originalPrice - (originalPrice * 0.25);
    float priceWithService = discountedPrice + (discountedPrice * 0.08);
    float finalPrice = priceWithService + 50;
    cout << "Final Ticket Cost: " << finalPrice << " PKR";
    return 0;
}
