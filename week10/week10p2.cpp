#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calculatePostage(double weight, string zipCode,
    double& weightCharge, double& areaCharge,
    double& postage)
{
    double rate;

    if (weight > 100)
        rate = 0.02;
    else if (weight > 50)
        rate = 0.03;
    else
        rate = 0.05;

    weightCharge = weight * rate;

    if (zipCode == "60171")
        areaCharge = 2.00;
    else if (zipCode == "60172")
        areaCharge = 2.50;
    else if (zipCode == "60635")
        areaCharge = 3.00;
    else
        areaCharge = 5.00;

    postage = weightCharge + areaCharge;
}

int main()
{
    double weight, weightCharge, areaCharge, postage;
    string zipCode;
    int count = 0;

    cout << fixed << setprecision(2);
    cout << "Enter package weight and ZIP code "
        << "(Ctrl+Z to stop):\n";

    while (cin >> weight >> zipCode)
    {
        calculatePostage(weight, zipCode,
            weightCharge, areaCharge, postage);

        cout << "Area charge: $" << areaCharge << endl;
        cout << "Weight charge: $" << weightCharge << endl;
        cout << "Postage: $" << postage << endl;

        count++;
    }

    cout << "\nNumber of entries: " << count << endl;

    return 0;
}