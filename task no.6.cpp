#include <iostream>
#include <string>
using namespace std;
int main()
 {
    string studentName;
    int rollNumber;
    float marksMath, marksScience, marksEnglish;
    cout << "Enter student name : ";
    cin >> studentName; 
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    cout << "Enter Marks for Math : ";
    cin >> marksMath;
    cout << "Enter Marks for Science : ";
    cin >> marksScience;
    cout << "Enter Marks for English: ";
    cin >> marksEnglish;
    float totalMarks = marksMath + marksScience + marksEnglish;
    float percentage = (totalMarks / 300.0) * 100.0;
    cout << "\n\n"; 

    cout << "**************************************************\n";
    cout << "*\t\tSTUDENT RESULT CARD\t\t *\n"; 
    cout << "**************************************************\n";
    cout << "Name:\t\t" << studentName << "\n"; 
    cout << "Roll Number:\t" << rollNumber << "\n";
    cout << "--------------------------------------------------\n";
    cout << "Subject\t\tMarks Obtained\n"; 
    cout << "--------------------------------------------------\n";
    cout << "Math\t\t" << marksMath << "/100\n";
    cout << "Science\t\t" << marksScience << "/100\n";
    cout << "English\t\t" << marksEnglish << "/100\n";
    cout << "--------------------------------------------------\n";
    cout << "Total Marks:\t" << totalMarks << "/300\n";
    cout << "Percentage:\t" << percentage << "%\n";
    cout << "**************************************************\n";

    return 0;
}

