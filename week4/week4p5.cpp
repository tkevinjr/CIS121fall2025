#include <iostream>
#include <string>
#include <iomanip>

int week4p5()
{
    std::string last_name;
    std::cout << "Enter last name: ";
    std::getline(std::cin, last_name);

    int dependents = 0;
    std::cout << "Enter number of dependents: ";
    if (!(std::cin >> dependents)) return 0;

    double gross_income = 0.0;
    std::cout << "Enter gross income: $";
    if (!(std::cin >> gross_income)) return 0;

    double adjusted_gross_income = gross_income - (dependents * 12000.0);
    double tax_rate = (adjusted_gross_income > 50000.0) ? 0.20 : 0.10;

    double income_tax = adjusted_gross_income * tax_rate;
    if (income_tax < 0.0)
    {
        income_tax = 100.00;
    }

    std::cout << "Last Name: " << last_name << '\n'
              << "Gross Income: $" << std::fixed << std::setprecision(2) << gross_income << '\n'
              << "Number of Dependents: " << dependents << '\n'
              << "Adjusted Gross Income: $" << std::fixed << std::setprecision(2) << adjusted_gross_income << '\n'
              << "Income Tax: $" << std::fixed << std::setprecision(2) << income_tax << '\n';

    return 0;
}

