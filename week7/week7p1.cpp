#include <iostream>
#include <iomanip>
using namespace std;

static int week7p1()
{
    int quantity;
    double price;
    double total = 0;

    while (cin >> quantity >> price)
    {
        double extended = quantity * price;
        double discount = 0;

        if (quantity > 1000)
        {
            discount = extended * 0.10;
        }

        double discountedPrice = extended - discount;
        total += discountedPrice;

        cout << fixed << setprecision(2);
        cout << "Quantity: " << quantity << endl;
        cout << "Price: " << price << endl;
        cout << "Extended price: " << extended << endl;
        cout << "Discount amount: " << discount << endl;
        cout << "Discounted price: " << discountedPrice << endl;
        cout << endl;
    }

    cout << "Total of discounted prices: " << total << endl;

    return 0;
}