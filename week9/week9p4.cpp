#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
using namespace std;

double determinePayRate(char jobCode)
{
    jobCode = toupper(jobCode);

    if (jobCode == 'L')
        return 25.00;
    else if (jobCode == 'A')
        return 30.00;
    else if (jobCode == 'J')
        return 50.00;
    else
        return 0.00;
}

double computeGrossPay(double hours, double rate)
{
    if (hours > 40)
    {
        double regularPay = 40 * rate;
        double overtimePay = (hours - 40) * rate * 1.5;

        return regularPay + overtimePay;
    }
    else
    {
        return hours * rate;
    }
}

int main()
{
    string lastName;
    char jobCode;
    double hours, rate, grossPay;
    double totalGrossPay = 0;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "Enter employee last name (Ctrl+Z to stop): ";

        if (!(cin >> lastName))
            break;

        cout << "Enter job code (L, A, or J): ";
        cin >> jobCode;

        cout << "Enter hours worked: ";
        cin >> hours;

        rate = determinePayRate(jobCode);
        grossPay = computeGrossPay(hours, rate);

        cout << "Last name: " << lastName << endl;
        cout << "Gross pay: $" << grossPay << endl;

        totalGrossPay += grossPay;
    }

    cout << "\nTotal gross pay: $"
        << totalGrossPay << endl;

    return 0;
}
