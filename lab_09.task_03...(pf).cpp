#include <iostream>
using namespace std;

int main() {
    int n, num;
    int evenSum = 0;
    int oddSum = 0;

    cout << "How many numbers? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> num;

        if (num % 2 == 0)
            evenSum = evenSum + num;
        else
            oddSum = oddSum + num;
    }

    cout << "Sum of even numbers = " << evenSum << endl;
    cout << "Sum of odd numbers = " << oddSum << endl;

    return 0;
}
