#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// Function to calculate miles per gallon
double calculateMPG(double gallons, double miles)
{
    return miles / gallons;
}

int main()
{
    ifstream inFile("trips.txt");

    double gallons, miles, mpg;
    double totalGallons = 0;
    double totalMiles = 0;

    cout << fixed << setprecision(2);

    if (!inFile)
    {
        cout << "Cannot open trips.txt";
        return 1;
    }

    cout << "Gallons Miles MPG" << endl;

    while (inFile >> gallons >> miles)
    {
        mpg = calculateMPG(gallons, miles);

        cout << gallons << " "
            << miles << " "
            << mpg << endl;

        totalGallons += gallons;
        totalMiles += miles;
    }

    cout << "\nTotal Gallons: " << totalGallons << endl;
    cout << "Total Miles: " << totalMiles << endl;

    inFile.close();
    return 0;
}