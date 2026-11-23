#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calculateTuition(double creditHours, double financialAid,
    double& tuition, double& tuitionOwed)
{
    tuition = creditHours * 250.00;
    tuitionOwed = tuition - financialAid;
}

int main()
{
    string lastName;
    double creditHours, financialAid;
    double tuition, tuitionOwed;
    double totalOwed = 0;
    double averageOwed;
    int count = 0;

    cout << fixed << setprecision(2);

    cout << "Enter last name, credit hours, and financial aid "
        << "(Ctrl+Z to stop):\n";

    while (cin >> lastName >> creditHours >> financialAid)
    {
        calculateTuition(creditHours, financialAid,
            tuition, tuitionOwed);

        cout << "Student: " << lastName << endl;
        cout << "Tuition: $" << tuition << endl;
        cout << "Tuition owed: $" << tuitionOwed << endl;

        totalOwed += tuitionOwed;
        count++;
    }

    cout << "\nTotal tuition owed: $" << totalOwed << endl;
    cout << "Number of students: " << count << endl;

    if (count > 0)
    {
        averageOwed = totalOwed / count;
        cout << "Average amount owed: $"
            << averageOwed << endl;
    }
    else
    {
        cout << "No student entries were made.\n";
    }

    return 0;
}