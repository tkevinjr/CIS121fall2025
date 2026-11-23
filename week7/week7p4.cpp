#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int week7p4()
{
    string lastName;
    char jobCode;
    double hours;

    double totalPay = 0;
    int count = 0;

    while (cin >> lastName >> jobCode >> hours)
    {
        double rate;

        if (jobCode == 'L')
        {
            rate = 25;
        }
        else if (jobCode == 'A')
        {
            rate = 30;
        }
        else if (jobCode == 'J')
        {
            rate = 50;
        }
        else
        {
            cout << "Invalid job code." << endl;
            continue;
        }

        double pay;

        if (hours <= 40)
        {
            pay = hours * rate;
        }
        else
        {
            double regularPay = 40 * rate;
            double overtimeHours = hours - 40;
            double overtimePay = overtimeHours * rate * 1.5;

            pay = regularPay + overtimePay;
        }

        cout << fixed << setprecision(2);
        cout << "Last name: " << lastName << endl;
        cout << "Job code: " << jobCode << endl;
        cout << "Hours worked: " << hours << endl;
        cout << "Pay: $" << pay << endl;
        cout << endl;

        totalPay += pay;
        count++;
    }

    double averagePay = 0;

    if (count > 0)
    {
        averagePay = totalPay / count;
    }

    cout << "Total pay: $" << totalPay << endl;
    cout << "Average pay: $" << averagePay << endl;
    cout << "Number of entries: " << count << endl;

    return 0;
}