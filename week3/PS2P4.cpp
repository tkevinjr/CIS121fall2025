#include <iostream>
using namespace std;

int ps2p4_main()
{
    double purchasePrice, currentPrice, percentageChange;

    cout << "Enter the purchase price of the stock: ";
    cin >> purchasePrice;

    cout << "Enter the current price of the stock: ";
    cin >> currentPrice;

    percentageChange = ((currentPrice - purchasePrice) / purchasePrice) * 100;

    if (percentageChange >= 0)
    {
        cout << "Percentage increase: " << percentageChange << "%" << endl;
    }
    else
    {
        cout << "Percentage decrease: " << -percentageChange << "%" << endl;
    }

    return 0;
}