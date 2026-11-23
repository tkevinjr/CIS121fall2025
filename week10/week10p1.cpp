#include <iostream>
#include <iomanip>
using namespace std;

void calculateOrder(double quantity, double price,
    double& total, double& tax, double& order)
{
    total = quantity * price;
    tax = total * 0.07;
    order = total + tax;
}

int main()
{
    double quantity, price;
    double total, tax, order;
    double sumTotal = 0, sumTax = 0, sumOrders = 0;

    cout << fixed << setprecision(2);

    cout << "Enter quantity and price (Ctrl+Z to stop):\n";

    while (cin >> quantity >> price)
    {
        calculateOrder(quantity, price, total, tax, order);

        cout << "Total before tax: $" << total << endl;
        cout << "Tax: $" << tax << endl;
        cout << "Total order: $" << order << endl;

        sumTotal += total;
        sumTax += tax;
        sumOrders += order;
    }

    cout << "\nSummary of all orders:\n";
    cout << "Sum of totals: $" << sumTotal << endl;
    cout << "Sum of taxes: $" << sumTax << endl;
    cout << "Sum of all orders: $" << sumOrders << endl;

    return 0;
}