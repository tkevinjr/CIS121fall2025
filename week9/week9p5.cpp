#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

double determineCostPerCredit(char districtCode)
{
    districtCode = toupper(districtCode);

    if (districtCode == 'I')
        return 250.00;
    else if (districtCode == 'O')
        return 550.00;
    else
        return 0.00;
}

double computeTuition(double creditHours, double costPerCredit)
{
    return creditHours * costPerCredit;
}

int main()
{
    string lastName;
    char districtCode;
    double creditHours, costPerCredit, tuition;
    double totalTuition = 0;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "Enter student last name (Ctrl+Z to stop): ";

        if (!(cin >> lastName))
            break;

        cout << "Enter credit hours: ";
        cin >> creditHours;

        cout << "Enter district code (I or O): ";
        cin >> districtCode;

        costPerCredit = determineCostPerCredit(districtCode);
        tuition = computeTuition(creditHours, costPerCredit);

        cout << "Student: " << lastName << endl;
        cout << "Tuition cost: $" << tuition << endl;

        totalTuition += tuition;
    }

    cout << "\nTotal tuition costs: $"
        << totalTuition << endl;

    return 0;
}