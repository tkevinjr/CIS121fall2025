#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

static double calculateMPG(double miles, double gallons)
{
    return miles / gallons;
}

int main()
{
    string city;
    double miles, gallons, mpg;
    double totalMiles = 0;
    int tripCount = 0;

    cout << "Enter destination city, miles, and gallons."
        << endl;
    cout << "Press Ctrl+Z then Enter to stop." << endl;

    while (cin >> city >> miles >> gallons)
    {
        if (gallons <= 0)
        {
            cout << "Gallons must be greater than zero."
                << endl;
            continue;
        }

        mpg = calculateMPG(miles, gallons);

        cout << fixed << setprecision(2);
        cout << "Destination: " << city << endl;
        cout << "Miles per gallon: " << mpg << endl;

        totalMiles += miles;
        tripCount++;
    }

    cout << "\nTotal miles traveled: "
        << totalMiles << endl;
    cout << "Number of trips: " << tripCount << endl;

    return 0;
}