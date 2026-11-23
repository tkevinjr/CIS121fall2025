#include <iostream>
#include <iomanip>
using namespace std;

static int week6p1()
{
    int quantity;
    char status;
    double price;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter customer status (A, B, C, or D): ";
    cin >> status;

    if (quantity > 10000 && status == 'A')
        price = 10.00;
    else if (quantity > 10000 && status == 'B')
        price = 12.00;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'C')
        price = 20.00;
    else if (quantity >= 5000 && quantity <= 10000 && status == 'D')
        price = 22.00;
    else
        price = 30.00;

    double extendedPrice = quantity * price;
    double tax = extendedPrice * 0.07;
    double total = extendedPrice + tax;

    cout << fixed << setprecision(2);
    cout << "Extended Price: $" << extendedPrice << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
