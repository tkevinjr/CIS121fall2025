#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string lastName;
    double hours;
    char jobCode;
    double payRate;
    double total;

    cout << "Enter employee last name: ";
    cin >> lastName;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter job code: ";
    cin >> jobCode;

    if (jobCode == 'E' || jobCode == 'e') {
        payRate = 25.00;
    }
    else {
        if (jobCode == 'J' || jobCode == 'j') {
            payRate = 20.00;
        }
        else {
            if (jobCode == 'A' || jobCode == 'a') {
                payRate = 15.00;
            }
            else {
                payRate = 0.00;
            }
        }
    }

    total = hours * payRate;

    cout << fixed << setprecision(2);
    cout << "Last Name: " << lastName << endl;
    cout << "Hours Worked: " << hours << endl;
    cout << "Pay Rate: $" << payRate << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
