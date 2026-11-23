#include <iostream>
#include <iomanip>
using namespace std;

int week6p5()
{
    char jobCode;
    double hours;
    double rate;

    cout << "Enter job code (L, J, or A): ";
    cin >> jobCode;

    cout << "Enter hours worked: ";
    cin >> hours;

    if (jobCode == 'L' && hours > 40)
        rate = 50.00;
    else if (jobCode == 'L' && hours <= 40)
        rate = 40.00;
    else if (jobCode == 'J' && hours > 60)
        rate = 100.00;
    else if (jobCode == 'J' && hours <= 60)
        rate = 75.00;
    else if (jobCode == 'A' && hours > 40)
        rate = 25.00;
    else
        rate = 20.00;

    double grossPay = hours * rate;

    cout << fixed << setprecision(2);
    cout << "Rate of Pay: $" << rate << endl;
    cout << "Gross Salary: $" << grossPay << endl;

    return 0;
}
