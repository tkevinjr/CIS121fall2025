#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeMPG(double miles, double gallons)
{
    if (gallons == 0)
        return 0.0;

    return miles / gallons;
}

double computeGasCost(double gallons)
{
    return gallons * 3.50;
}

int main()
{
    string city;
    double miles, gallons, mpg, gasCost;
    double totalGasCost = 0;

    cout << fixed << setprecision(2);

    while (true)
    {
        cout << "Enter destination city (Ctrl+Z to stop): ";

        if (!(cin >> city))
            break;

        cout << "Enter miles travelled: ";
        cin >> miles;

        cout << "Enter gallons used: ";
        cin >> gallons;

        mpg = computeMPG(miles, gallons);
        gasCost = computeGasCost(gallons);

        cout << "Destination: " << city << endl;
        cout << "Miles per gallon: " << mpg << endl;
        cout << "Gas cost: $" << gasCost << endl;

        totalGasCost += gasCost;
    }

    cout << "\nTotal cost of gas: $"
        << totalGasCost << endl;

    return 0;
}
