#include <iostream>
using namespace std;
double calculatePercentage(int m1, int m2, int m3, int m4, int m5) {
    int totalMarks = m1 + m2 + m3 + m4 + m5;
    double percentage = (totalMarks / 500.0) * 100; 
    return percentage;
}
int main() {
    int sub1, sub2, sub3, sub4, sub5;
    cout << "Enter marks for 5 subjects (out of 100):\n";
    cin >> sub1 >> sub2 >> sub3 >> sub4 >> sub5;
    double percent = calculatePercentage(sub1, sub2, sub3, sub4, sub5);
    cout << "Percentage: " << percent << "%" << endl;
    return 0;
}
