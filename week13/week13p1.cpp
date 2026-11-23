#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

struct Car
{
    string make;
    string model;
    double msrp;
};

const int SIZE = 10;

void loadCars(Car cars[], int size)
{
    ifstream infile("CarData.txt");

    if (!infile)
    {
        cout << "Error opening file." << endl;
        return;
    }

    for (int i = 0; i < size; i++)
    {
        infile >> cars[i].make
            >> cars[i].model
            >> cars[i].msrp;
    }

    infile.close();
}

void displayCars(Car cars[], int size)
{
    cout << fixed << setprecision(2);

    cout << "Car Information" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Make: " << cars[i].make << endl;
        cout << "Model: " << cars[i].model << endl;
        cout << "MSRP: $" << cars[i].msrp << endl;
        cout << endl;
    }
}

int main()
{
    Car cars[SIZE];

    loadCars(cars, SIZE);
    displayCars(cars, SIZE);

    return 0;
}