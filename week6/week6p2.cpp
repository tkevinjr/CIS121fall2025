#include <iostream>
#include <iomanip>
using namespace std;

int week6p2()
{
    int partNumber;
    int quantity;
    double costPerUnit;

    cout << "Enter part number: ";
    cin >> partNumber;

    cout << "Enter quantity: ";
    cin >> quantity;

    if (partNumber == 10 && quantity > 1000)
        costPerUnit = 1.00;
    else if (partNumber == 99 && quantity > 500)
        costPerUnit = 2.00;
    else
        costPerUnit = 5.00;

    double totalCost = quantity * costPerUnit;

    cout << fixed << setprecision(2);
    cout << "Part Number: " << partNumber << endl;
    cout << "Cost Per Unit: $" << costPerUnit << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}