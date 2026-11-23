#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

void calculateInvestment(double investment, double rate5,
    double rate10, double& amount5,
    double& amount10)
{
    amount5 = investment * pow(1 + rate5, 5);
    amount10 = investment * pow(1 + rate10, 10);
}

int main()
{
    double investment, rate5, rate10;
    double amount5, amount10;

    cout << fixed << setprecision(2);

    cout << "Enter investment amount, five-year rate, "
        << "and ten-year rate (Ctrl+Z to stop):\n";

    while (cin >> investment >> rate5 >> rate10)
    {
        calculateInvestment(investment, rate5, rate10,
            amount5, amount10);

        cout << "Original investment: $" << investment << endl;
        cout << "Five-year amount: $" << amount5 << endl;
        cout << "Ten-year amount: $" << amount10 << endl;
        cout << "-------------------------\n";
    }

    return 0;
}