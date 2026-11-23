#include <iostream>
using namespace std;

int ps2p5_main()
{
    double fixedCosts, pricePerUnit, costPerUnit, breakEvenPoint;

    cout << "Enter the fixed costs: ";
    cin >> fixedCosts;

    cout << "Enter the price per unit: ";
    cin >> pricePerUnit;

    cout << "Enter the cost per unit: ";
    cin >> costPerUnit;

    breakEvenPoint = fixedCosts / (pricePerUnit - costPerUnit);

    cout << "Break-even point: " << breakEvenPoint << " units" << endl;

    return 0;
}

