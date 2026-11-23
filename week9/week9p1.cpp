#include <iostream>
#include <iomanip>
using namespace std;

double computeTotal(int quantity, double price)
{
    return quantity * price;
}

double computeDiscountTotal(double total)
{
    double discountRate;

    if (total > 10000.00)
        discountRate = 0.10;
    else
        discountRate = 0.05;

    double discountAmount = total * discountRate;
    return total - discountAmount;
}

int main()
{
    int quantity;
    double price, total, discountTotal;
    double sumTotal = 0, sumDiscountTotal = 0;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "Enter quantity (Ctrl+Z to stop): ";

        if (!(cin >> quantity))
            break;

        cout << "Enter price: ";
        cin >> price;

        total = computeTotal(quantity, price);
        discountTotal = computeDiscountTotal(total);

        cout << "Total: $" << total << endl;
        cout << "Discount total: $" << discountTotal << endl;

        sumTotal += total;
        sumDiscountTotal += discountTotal;
    }

    cout << "\nSum of totals: $" << sumTotal << endl;
    cout << "Sum of discount totals: $" << sumDiscountTotal << endl;

    return 0;
}