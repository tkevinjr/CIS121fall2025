#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

static double getLabFee(string department, int courseCode)
{
    if (department == "CIS" && courseCode == 101)
        return 50.00;
    else if (department == "CIS" && courseCode == 121)
        return 100.00;    

    else if (department == "MAT" && courseCode == 111)
        return 25.00;
    else if (department == "MAT" && courseCode == 112)
        return 35.00;
    else if (department == "ENG" && courseCode == 100)
        return 55.00;
    else
        return 50.00;
}

int main()
{
    string department;
    int courseCode;
    double labFee;
    double totalFees = 0;
    int courseCount = 0;

    cout << "Enter department and course code."
        << endl;
    cout << "Press Ctrl+Z then Enter to stop." << endl;

    while (cin >> department >> courseCode)
    {
        labFee = getLabFee(department, courseCode);

        cout << fixed << setprecision(2);
        cout << "Department: " << department << endl;
        cout << "Course code: " << courseCode << endl;
        cout << "Lab fee: $" << labFee << endl;
        cout << "------------------------" << endl;

        totalFees += labFee;
        courseCount++;
    }

    cout << fixed << setprecision(2);
    cout << "\nTotal lab fees: $" << totalFees << endl;
    cout << "Number of courses: " << courseCount << endl;

    if (courseCount > 0)
    {
        cout << "Average lab fee: $"
            << totalFees / courseCount << endl;
    }
    else
    {
        cout << "Average lab fee: $0.00" << endl;
    }

    return 0;
}