#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int week7p5()
{
    string lastName;
    int creditHours;
    char districtCode;

    double totalTuition = 0;
    int totalCreditHours = 0;
    int count = 0;

    while (cin >> lastName >> creditHours >> districtCode)
    {
        double rate;

        if (districtCode == 'I')
        {
            rate = 250;
        }
        else if (districtCode == 'O')
        {
            rate = 550;
        }
        else
        {
            cout << "Invalid district code." << endl;
            continue;
        }

        double tuition = creditHours * rate;

        cout << fixed << setprecision(2);
        cout << "Student name: " << lastName << endl;
        cout << "Tuition owed: $" << tuition << endl;
        cout << endl;

        totalTuition += tuition;
        totalCreditHours += creditHours;
        count++;
    }

    cout << "Total tuition: $" << totalTuition << endl;
    cout << "Total credit hours taken: " << totalCreditHours << endl;
    cout << "Number of students: " << count << endl;

    return 0;
}
