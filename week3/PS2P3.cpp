#include <iostream>
using namespace std;

int ps2p3_main()
{
    double mealTotal, tip, totalWithTip;

    cout << "Enter the total for the meal: ";
    cin >> mealTotal;

    tip = mealTotal * 0.15;
    totalWithTip = mealTotal + tip;

    cout << "Meal total: $" << mealTotal << endl;
    cout << "Tip: $" << tip << endl;
    cout << "Total with tip: $" << totalWithTip << endl;

    return 0;
}