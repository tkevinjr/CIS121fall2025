// PS2P1.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int quantity;
    double unitPrice, extendedPrice;

    cout << "Enter quantity: ";
    cin >> quantity;

    cout << "Enter unit price: ";
    cin >> unitPrice;

    extendedPrice = quantity * unitPrice;

    cout << fixed << setprecision(2);
    cout << "Extended price: $" << extendedPrice << endl;

    return 0;
}

#if 0
// PS2P2.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string lastName;
    double hours, payRate, grossPay;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter hours worked: ";
    cin >> hours;

    cout << "Enter pay rate: ";
    cin >> payRate;

    grossPay = hours * payRate;

    cout << fixed << setprecision(2);
    cout << "Last name: " << lastName << endl;
    cout << "Gross pay: $" << grossPay << endl;

    return 0;
}
#endif

#if 0
// PS2P3.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double length, width;
    double area, circumference;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter width: ";
    cin >> width;

    area = length * width;
    circumference = 2 * length + 2 * width;

    cout << fixed << setprecision(2);
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;

    return 0;
}
#endif

#if 0
// PS2P4.cpp
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string lastName;
    int creditsTaken;
    double tuition;

    const double COST_PER_CREDIT = 250.00;
    const double LAB_FEE = 100.00;

    cout << "Enter last name: ";
    cin >> lastName;

    cout << "Enter credits taken: ";
    cin >> creditsTaken;

    tuition = creditsTaken * COST_PER_CREDIT + LAB_FEE;

    cout << fixed << setprecision(2);
    cout << "Last name: " << lastName << endl;
    cout << "Total tuition: $" << tuition << endl;

    return 0;
}
#endif

#if 0
// PS2P5.cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double price, discountPercent;
    double discountAmount, discountedPrice;

    cout << "Enter item price: ";
    cin >> price;

    cout << "Enter discount percent as a decimal: ";
    cin >> discountPercent;

    discountAmount = price * discountPercent;
    discountedPrice = price - discountAmount;

    cout << fixed << setprecision(2);
    cout << "Discount amount: $" << discountAmount << endl;
    cout << "Discounted price: $" << discountedPrice << endl;

    return 0;
}
#endif
