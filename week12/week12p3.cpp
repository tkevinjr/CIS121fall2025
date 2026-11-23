#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

const int SIZE = 10;

// Function to read employee data
void readData(string first[], string last[], double salary[])
{
    ifstream infile("Empdata.txt");

    for (int i = 0; i < SIZE; i++)
    {
        infile >> first[i] >> last[i] >> salary[i];
    }

    infile.close();
}

// Function to display employee data
void displayData(string first[], string last[], double salary[])
{
    cout << "\nEmployee List:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << first[i] << " " << last[i] << " "
            << fixed << setprecision(2)
            << salary[i] << endl;
    }
}

// Function to search for an employee
int searchEmployee(string last[], string searchName)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (last[i] == searchName)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string first[SIZE];
    string last[SIZE];
    double salary[SIZE];
    string searchName;

    readData(first, last, salary);

    displayData(first, last, salary);

    cout << "\nEnter last name, Ctrl+Z to stop: ";

    while (cin >> searchName)
    {
        int position = searchEmployee(last, searchName);

        if (position != -1)
        {
            cout << first[position] << " "
                << last[position] << " makes $"
                << fixed << setprecision(2)
                << salary[position] << endl;
        }
        else
        {
            cout << searchName << " not found" << endl;
        }

        cout << "\nEnter last name, Ctrl+Z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day." << endl;

    return 0;
}