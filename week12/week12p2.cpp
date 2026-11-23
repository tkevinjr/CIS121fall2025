#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int SIZE = 8;

// Function to read city data
void readData(string city[], int population[])
{
    ifstream infile("CityData.txt");

    for (int i = 0; i < SIZE; i++)
    {
        infile >> city[i] >> population[i];
    }

    infile.close();
}

// Function to display city data
void displayData(string city[], int population[])
{
    cout << "\nCity Population List:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << city[i] << " " << population[i] << endl;
    }
}

// Function to search for a city
int searchCity(string city[], string searchName)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (city[i] == searchName)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    string city[SIZE];
    int population[SIZE];
    string searchName;

    readData(city, population);

    displayData(city, population);

    cout << "\nEnter city name, Ctrl+Z to stop: ";

    while (cin >> searchName)
    {
        int position = searchCity(city, searchName);

        if (position != -1)
        {
            cout << searchName << " has a population of "
                << population[position] << endl;
        }
        else
        {
            cout << searchName << " not found" << endl;
        }

        cout << "\nEnter city name, Ctrl+Z to stop: ";
    }

    cout << "\nGoodbye. Have a nice day." << endl;

    return 0;
}
