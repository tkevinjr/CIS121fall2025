#include <iostream>
using namespace std;

int ps2p2_main()
{
    double stockPrice, quantity, value;

    cout << "Enter the current stock price: ";
    cin >> stockPrice;

    cout << "Enter the quantity of stock: ";
    cin >> quantity;

    value = stockPrice * quantity;

    cout << "Current value of stock: $" << value << endl;

    return 0;
}