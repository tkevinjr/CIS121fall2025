#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int week7p3()
{
    string city;
    double miles;
    double gallons;

    double totalMiles = 0;
    int count = 0;

    while (cin >> city >> miles >> gallons)
    {
        double milesPerGallon = miles / gallons;

        cout << fixed << setprecision(2);
        cout << "Destination: " << city << endl;
        cout << "Miles per gallon: " << milesPerGallon << endl;
        cout << endl;

        totalMiles += miles;
        count++;
    }

    cout << "Total miles travelled: " << totalMiles << endl;
    cout << "Number of trips: " << count << endl;

    return 0;
}