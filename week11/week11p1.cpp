#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate savings and sales tax
void calculate(double msrp, double salesPrice,
    double& savings, double& salesTax)
{
    savings = msrp - salesPrice;
    salesTax = salesPrice * 0.07;
}

int main()
{
    ifstream inFile("auto.txt");

    string make, model;
    double msrp, salesPrice;
    double savings, salesTax;
    double totalSavings = 0;

    cout << fixed << setprecision(2);

    if (!inFile)
    {
        cout << "Cannot open auto.txt";
        return 1;
    }

    cout << "Make Model MSRP Sales Price"
        << " Savings Sales Tax" << endl;

    while (inFile >> make >> model >> msrp >> salesPrice)
    {
        calculate(msrp, salesPrice, savings, salesTax);

        cout << make << " " << model << " "
            << msrp << " " << salesPrice << " "
            << savings << " " << salesTax << endl;

        totalSavings += savings;
    }

    cout << "\nTotal Savings: $" << totalSavings << endl;

    inFile.close();
    return 0;
}