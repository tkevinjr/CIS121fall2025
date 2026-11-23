#include <iostream>
#include <iomanip>
using namespace std;

static int week6p4()
{
    char equipment;
    char day;
    double cost;

    cout << "Enter equipment code (A, B, or C): ";
    cin >> equipment;

    cout << "Enter day code (H for half day, F for full day): ";
    cin >> day;

    if (equipment == 'A' && day == 'F')
        cost = 10.00;
    else if (equipment == 'A' && day == 'H')
        cost = 15.00;
    else if (equipment == 'B' && day == 'F')
        cost = 20.00;
    else if (equipment == 'B' && day == 'H')
        cost = 35.00;
    else if (equipment == 'C' && day == 'H')
        cost = 40.00;
    else if (equipment == 'C' && day == 'F')
        cost = 45.00;
    else
        cost = 50.00;

    cout << fixed << setprecision(2);
    cout << "Rental Cost: $" << cost << endl;

    return 0;
}
