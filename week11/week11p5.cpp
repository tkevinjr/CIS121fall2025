#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

// Function to calculate tuition and course fees
void calculateTuition(char studentCode, double credits,
    double& tuition, double& courseFees)
{
    double costPerCredit;

    if (studentCode == 'I')
        costPerCredit = 250.00;
    else
        costPerCredit = 500.00;

    tuition = credits * costPerCredit;
    courseFees = tuition * 0.10;
}

int main()
{
    ifstream inFile("student.txt");

    string lastName;
    char studentCode;
    double credits, tuition, courseFees;
    double costPerCredit;
    double totalTuition = 0;
    double averageTuition;
    int studentCount = 0;

    cout << fixed << setprecision(2);

    if (!inFile)
    {
        cout << "Cannot open student.txt";
        return 1;
    }

    cout << "Last Name Code Cost/Credit Credits"
        << " Tuition Course Fees" << endl;

    while (inFile >> lastName >> studentCode >> credits)
    {
        calculateTuition(studentCode, credits,
            tuition, courseFees);

        if (studentCode == 'I')
            costPerCredit = 250.00;
        else
            costPerCredit = 500.00;

        cout << lastName << " "
            << studentCode << " $"
            << costPerCredit << " "
            << credits << " $"
            << tuition << " $"
            << courseFees << endl;

        totalTuition += tuition;
        studentCount++;
    }

    if (studentCount > 0)
    {
        averageTuition = totalTuition / studentCount;

        cout << "\nTotal Tuition: $" << totalTuition << endl;
        cout << "Number of Students: " << studentCount << endl;
        cout << "Average Tuition Per Student: $"
            << averageTuition << endl;
    }

    inFile.close();
    return 0;
}