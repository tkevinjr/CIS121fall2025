#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pounds;
    double pricePerPound;
    double total;

    cout << "Enter quantity of apples in pounds: ";
    cin >> pounds;

    if (pounds > 100) {
        pricePerPound = 0.10;
    }
    else {
        if (pounds >= 50) {
            pricePerPound = 0.25;
        }
        else {
            pricePerPound = 0.50;
        }
    }

    total = pounds * pricePerPound;

    cout << fixed << setprecision(2);
    cout << "Price Per Pound: $" << pricePerPound << endl;
    cout << "Total: $" << total << endl;

    return 0;
}