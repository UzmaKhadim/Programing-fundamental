#include <iostream>
using namespace std;

int main() {
    int choice;
    float radius, length, width, base, height, area;

    cout << "Area Calculator\n";
    cout << "1. Circle\n";
    cout << "2. Rectangle\n";
    cout << "3. Triangle\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter radius: ";
            cin >> radius;
            area = 3.14 * radius * radius;
            cout << "Area of Circle = " << area;
            break;

        case 2:
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter width: ";
            cin >> width;
            area = length * width;
            cout << "Area of Rectangle = " << area;
            break;

        case 3:
            cout << "Enter base: ";
            cin >> base;
            cout << "Enter height: ";
            cin >> height;
            area = 0.5 * base * height;
            cout << "Area of Triangle = " << area;
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;}
