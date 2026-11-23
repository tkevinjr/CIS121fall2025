#include <iostream>
#include <iomanip>
using namespace std;

int week6p3()
{
    int tickets;
    char location;
    double pricePerTicket;

    cout << "Enter number of tickets: ";
    cin >> tickets;

    cout << "Enter location code (H or L): ";
    cin >> location;

    if (tickets > 25 || location == 'H')
        pricePerTicket = 30.00;
    else if ((tickets > 10 && tickets <= 24) || location == 'L')
        pricePerTicket = 40.00;
    else
        pricePerTicket = 50.00;

    double totalCost = tickets * pricePerTicket;

    cout << fixed << setprecision(2);
    cout << "Number of Tickets: " << tickets << endl;
    cout << "Price Per Ticket: $" << pricePerTicket << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}