#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int week7p2()
{
    string lastName;
    int hits;
    int atBats;
    int count = 0;

    while (cin >> lastName >> hits >> atBats)
    {
        double battingAverage = (double)hits / atBats;

        cout << fixed << setprecision(3);
        cout << "Last name: " << lastName << endl;
        cout << "Batting average: " << battingAverage << endl;
        cout << endl;

        count++;
    }

    cout << "Number of players: " << count << endl;

    return 0;
}
