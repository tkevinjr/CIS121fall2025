#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate bi-weekly salary
double calculatePay(double annualSalary)
{
    return annualSalary / 26;
}

int main()
{
    ifstream inFile("empl.txt");

    string lastName;
    double annualSalary, biWeeklySalary;
    double totalSalary = 0;
    double averageSalary;
    int employeeCount = 0;

    cout << fixed << setprecision(2);

    if (!inFile)
    {
        cout << "Cannot open empl.txt";
        return 1;
    }

    cout << "Last Name Annual Salary Bi-Weekly Pay"
        << endl;

    while (inFile >> lastName >> annualSalary)
    {
        biWeeklySalary = calculatePay(annualSalary);

        cout << lastName << " $"
            << annualSalary << " $"
            << biWeeklySalary << endl;

        totalSalary += annualSalary;
        employeeCount++;
    }

    if (employeeCount > 0)
    {
        averageSalary = totalSalary / employeeCount;

        cout << "\nTotal Annual Salary: $" << totalSalary << endl;
        cout << "Number of Employees: " << employeeCount << endl;
        cout << "Average Annual Salary: $" << averageSalary << endl;
    }

    inFile.close();
    return 0;
}