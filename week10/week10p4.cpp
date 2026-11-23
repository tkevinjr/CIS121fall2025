#include <iostream>
#include <iomanip>
using namespace std;

void calculateWidgetOrder(int widgets, double& costPerWidget,
    double& extendedPrice, double& salesTax,
    double& totalOrder)
{
    if (widgets >= 10000)
        costPerWidget = 4.00;
    else if (widgets >= 5000)
        costPerWidget = 5.00;
    else
        costPerWidget = 10.00;

    extendedPrice = widgets * costPerWidget;
    salesTax = extendedPrice * 0.07;
    totalOrder = extendedPrice + salesTax;
}

int main()
{
    int widgets;
    double costPerWidget, extendedPrice, salesTax, totalOrder;
    double sumOrders = 0;

    cout << fixed << setprecision(2);
    cout << "Enter number of widgets (Ctrl+Z to stop):\n";

    while (cin >> widgets)
    {
        calculateWidgetOrder(widgets, costPerWidget,
            extendedPrice, salesTax, totalOrder);

        cout << "Number of widgets: " << widgets << endl;
        cout << "Cost per widget: $" << costPerWidget << endl;
        cout << "Extended price: $" << extendedPrice << endl;
        cout << "Sales tax: $" << salesTax << endl;
        cout << "Total order: $" << totalOrder << endl;
        cout << "-------------------------\n";

        sumOrders += totalOrder;
    }

    cout << "\nSum of all total orders: $" << sumOrders << endl;

    return 0;
}
