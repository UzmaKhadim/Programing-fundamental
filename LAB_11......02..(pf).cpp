#include <iostream>
using namespace std;
int main() {
    int n;
    do {
        cout << "Enter the number of data (1-100): ";
        cin >> n;

        if(n <= 0 || n > 100) {
            cout << "Error! Please enter a number between 1 and 100." << endl;
        }
    } while(n <= 0 || n > 100);

    int numbers[n]; 
    double sum = 0; 
    cout << "Enter " << n << " numbers: " << endl;
    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
        sum += numbers[i]; 
    }
    double average = sum / n;
    cout << "The average of the " << n << " numbers is: " << average << endl;

    return 0;
}
