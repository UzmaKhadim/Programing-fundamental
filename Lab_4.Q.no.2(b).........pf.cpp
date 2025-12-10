#include <iostream>
using namespace std;
int main() 
{
    int totalClasses = 60;
    int attended = 48;
    bool requirementMet = attended >= (0.75 * totalClasses);
    bool moreThan50 = attended > 50;
    bool lessThan60 = attended < (0.60 * totalClasses);
    cout << "1. Requirement met? " << requirementMet << endl;
    cout << "2. Attended > 50? " << moreThan50 << endl;
    cout << "3. Attended < 60%? " << lessThan60 << endl;

    return 0;
}

