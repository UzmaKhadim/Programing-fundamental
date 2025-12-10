#include <iostream>
using namespace std;
int main()
 {
    int requiredStock = 500;
    int currentStock = 420;
    bool isSufficient = currentStock >= requiredStock;
    bool isLessThanHalf = currentStock < (requiredStock / 2);
    bool isEqual = currentStock == requiredStock;
    bool isShortageOver50 = (requiredStock - currentStock) > 50;
    cout << "1. Stock sufficient? " << isSufficient << endl;
    cout << "2. Stock < 50% of required? " << isLessThanHalf << endl;
    cout << "3. Stock exactly equal? " << isEqual << endl;
    cout << "4. Shortage > 50 units? " << isShortageOver50 << endl;
    return 0;
}


