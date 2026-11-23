#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

static double getUnitPrice(char code)
{
    code = toupper(code);

    if (code == 'W')
        return 10.00;
    else if (code == 'C')
        return 15.00;
    else if (code == 'G')
        return 20.00;
    else
        return -1;
}


static double getShipping(char code)
{
    code = toupper(code);

    if (code == 'W')
        return 2.00;
    else if (code == 'C')
        return 5.00;
    else if (code == 'G')
        return 7.00;
    else
        return -1;
}

int main()
{
    char code;
    int quantity;
    double unitPrice, shipping;
    double extendedPrice, total;
    double grandTotal = 0;

    cout << "Enter product code (W, C, G) and quantity."
        << endl;
    cout << "Press Ctrl+Z then Enter to stop." << endl;

    while (cin >> code >> quantity)
    {
        unitPrice = getUnitPrice(code);
        shipping = getShipping(code);

        if (unitPrice < 0 || quantity < 0)
        {
            cout << "Invalid product code or quantity."
                << endl;
            continue;
        }

        extendedPrice = quantity * unitPrice;
        total = extendedPrice + shipping;

        cout << fixed << setprecision(2);
        cout << "Product code: " << char(toupper(code))
            << endl;
        cout << "Unit price: $" << unitPrice << endl;
        cout << "Shipping: $" << shipping << endl;
        cout << "Extended price: $" << extendedPrice
            << endl;
        cout << "Order total: $" << total << endl;
        cout << "------------------------" << endl;

        grandTotal += total;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal of all orders: $"
        << grandTotal << endl;

    return 0;
}