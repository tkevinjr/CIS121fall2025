#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

static double calculatePay(char jobCode, double hours)
{
    double rate;

    jobCode = toupper(jobCode);

    if (jobCode == 'L')
        rate = 25.00;
    else if (jobCode == 'A')
        rate = 30.00;
    else if (jobCode == 'J')
        rate = 50.00;
    else
        return -1;

    if (hours > 40)
        return (40 * rate) +
        ((hours - 40) * rate * 1.5);

    return hours * rate;
}

int main()
{
    string lastName;
    char jobCode;
    double hours, pay;
    double totalPay = 0;
    int employeeCount = 0;

    cout << "Enter last name, job code, and hours worked."
        << endl;
    cout << "Press Ctrl+Z then Enter to stop." << endl;

    while (cin >> lastName >> jobCode >> hours)
    {
        pay = calculatePay(jobCode, hours);

        if (pay < 0 || hours < 0)
        {
            cout << "Invalid job code or hours."
                << endl;
            continue;
        }

        cout << fixed << setprecision(2);
        cout << "Employee: " << lastName << endl;
        cout << "Pay: $" << pay << endl;

        totalPay += pay;
        employeeCount++;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal employee pay: $" << totalPay
        << endl;
    cout << "Number of entries: " << employeeCount
        << endl;

    if (employeeCount > 0)
    {
        cout << "Average pay: $"
            << totalPay / employeeCount << endl;
    }
    else
    {
        cout << "Average pay: $0.00" << endl;
    }

    return 0;
}