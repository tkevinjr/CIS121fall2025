#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 10;

// Function to read the data
void readData(string first[], string last[], double gpa[])
{
    ifstream infile("StudentData.txt");

    for (int i = 0; i < SIZE; i++)
    {
        infile >> first[i] >> last[i] >> gpa[i];
    }

    infile.close();
}

// Function to display the arrays
void displayData(string first[], string last[], double gpa[])
{
    cout << "\nStudent List:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << first[i] << " " << last[i]
            << " " << gpa[i] << endl;
    }
}

// Function to display arrays in reverse
void displayReverse(string first[], string last[], double gpa[])
{
    cout << "\nReverse Student List:\n";

    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << first[i] << " " << last[i]
            << " " << gpa[i] << endl;
    }
}

int main()
{
    string first[SIZE];
    string last[SIZE];
    double gpa[SIZE];

    readData(first, last, gpa);

    displayData(first, last, gpa);

    displayReverse(first, last, gpa);

    return 0;
}