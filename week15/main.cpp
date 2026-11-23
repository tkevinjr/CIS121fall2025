#include <iostream>
#include <iomanip>
#include "Manager.h"
using namespace std;

int main()
{
    Manager manager;

    string first, last;
    float salary;

    cout << "Enter first name: ";
    cin >> first;

    cout << "Enter last name: ";
    cin >> last;

    cout << "Enter annual salary: ";
    cin >> salary;

    manager.FirstName(first);
    manager.LastName(last);
    manager.Salary(salary);

    cout << fixed << setprecision(2);

    cout << "\n--- Manager Information ---" << endl;

    cout << "First Name: " << manager.FirstName() << endl;
    cout << "Last Name: " << manager.LastName() << endl;
    cout << "Salary: $" << manager.Salary() << endl;

    cout << "Bonus: $" << manager.Bonus() << endl;

    cout << "Long Term Bonus: $"
        << manager.Long_Term_Bonus() << endl;

    return 0;
}
