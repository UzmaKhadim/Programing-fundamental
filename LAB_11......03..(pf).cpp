#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int numbers[n]; 
    cout << "Enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }
    int largest = numbers[0];
    for(int i = 1; i < n; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }
    cout << "The largest number is: " << largest << endl;
    return 0;
}
