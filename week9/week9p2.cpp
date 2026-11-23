#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double computeBattingAverage(int hits, int atBats)
{
    if (atBats == 0)
        return 0.0;

    return static_cast<double>(hits) / atBats;
}

int main()
{
    string lastName;
    int hits, atBats;
    int playerCount = 0;

    cout << fixed << setprecision(3);

    while (true)
    {
        cout << "Enter player's last name (Ctrl+Z to stop): ";

        if (!(cin >> lastName))
            break;

        cout << "Enter number of hits: ";
        cin >> hits;

        cout << "Enter number of at-bats: ";
        cin >> atBats;

        double average = computeBattingAverage(hits, atBats);

        cout << "Last name: " << lastName << endl;
        cout << "Batting average: " << average << endl;

        playerCount++;
    }

    cout << "\nNumber of players entered: "
        << playerCount << endl;

    return 0;
}