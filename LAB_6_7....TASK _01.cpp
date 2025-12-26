#include <iostream>
using namespace std;

int main() {
    float temperature;
    cout << "Enter current temperature (°C): ";
    cin >> temperature;

    if (temperature > 45) {
        cout << "ALERT: Temperature exceeds safe limit! Current temperature: " << temperature << "°C\n";
    } else {
        cout << "Temperature is within safe limits. Current temperature: " << temperature << "°C\n";
    }

    return 0;
}

