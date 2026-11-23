#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

static double calculateTuition(int credits)
{
    return credits * 250.00;
}

int main()
{
    string lastName;
    int credits;
    double tuition;
    double totalTuition = 0;
    int studentCount = 0;

    cout << "Enter student last name and credits taken."
        << endl;
    cout << "Press Ctrl+Z then Enter to stop." << endl;

    while (cin >> lastName >> credits)
    {
        if (credits < 0)
        {
            cout << "Credits cannot be negative."
                << endl;
            continue;
        }

        tuition = calculateTuition(credits);

        cout << fixed << setprecision(2);
        cout << "Student: " << lastName << endl;
        cout << "Credits taken: " << credits << endl;
        cout << "Tuition owed: $" << tuition << endl;

        totalTuition += tuition;
        studentCount++;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal tuition: $" << totalTuition
        << endl;
    cout << "Number of students: " << studentCount
        << endl;

    return 0;
}