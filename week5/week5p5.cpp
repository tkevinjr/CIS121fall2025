#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double weight;
    double rate;
    double total;

    cout << "Enter weight in pounds: ";
    cin >> weight;

    if (weight > 100) {
        rate = 0.50;
    }
    else {
        if (weight >= 30) {
            rate = 0.25;
        }
        else {
            if (weight >= 20) {
                rate = 0.20;
            }
            else {
                rate = 0.10;
            }
        }
    }

    total = weight * rate;

    cout << fixed << setprecision(2);
    cout << "Weight: " << weight << " lbs" << endl;
    cout << "Rate Per Pound: $" << rate << endl;
    cout << "Total Given: $" << total << endl;

    return 0;
}