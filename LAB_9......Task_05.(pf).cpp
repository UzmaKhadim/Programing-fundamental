#include <iostream>
using namespace std;
int main() {
    float temp;
    float sum = 0;
    float maxTemp;
    string day;
    cout << "Enter temperature for Monday: ";
    cin >> temp;
    sum = temp;
    maxTemp = temp;
    string days[6] = {"Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i < 6; i++) {
        cout << "Enter temperature for " << days[i] << ": ";
        cin >> temp;

        sum += temp;          
        if (temp > maxTemp) { 
            maxTemp = temp;
        }
    }
    float average = sum / 7;
    cout << "Average temperature of the week = " << average << endl;
    cout << "Highest temperature recorded = " << maxTemp << endl;

    return 0;
}
