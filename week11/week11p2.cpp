#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate extended price
double calculatePrice(int quantity, double price)
{
    return quantity * price;
}

int main()
{
    ifstream inFile("grocery.txt");

    string item;
    int quantity;
    double price, extendedPrice;
    double sum = 0;
    double tax, totalReceipt;

    cout << fixed << setprecision(2);

    if (!inFile)
    {
        cout << "Cannot open grocery.txt";
        return 1;
    }

    cout << "Item Quantity Cost Extended Price"
        << endl;

    while (inFile >> item >> quantity >> price)
    {
        extendedPrice = calculatePrice(quantity, price);

        cout << item << " "
            << quantity << " $"
            << price << " $"
            << extendedPrice << endl;

        sum += extendedPrice;
    }

    tax = sum * 0.07;
    totalReceipt = sum + tax;

    cout << "\nSum of Extended Prices: $" << sum << endl;
    cout << "Tax (7%): $" << tax << endl;
    cout << "Total Receipt: $" << totalReceipt << endl;

    inFile.close();
    return 0;
}
