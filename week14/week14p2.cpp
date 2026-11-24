#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Computer
{
private:
    string make;
    string model;
    string cpu;
    string ram;
    string hardDrive;
    string computerType;

public:
    Computer()
    {
        make = "Lenovo";
        model = "LE100A";
        cpu = "Intel";
        ram = "32GB";
        hardDrive = "HD";
        computerType = "Laptop";
    }

    void setMake(string m)
    {
        make = m;
    }

    void setModel(string m)
    {
        model = m;
    }

    void setCPU(string c)
    {
        cpu = c;
    }

    void setRAM(string r)
    {
        ram = r;
    }

    void setHardDrive(string h)
    {
        hardDrive = h;
    }

    void setComputerType(string t)
    {
        computerType = t;
    }

    double getCost()
    {
        double cost = 0;

        if (make == "Lenovo")
            cost += 1200;
        else if (make == "HP")
            cost += 1000;
        else if (make == "Apple")
            cost += 2000;

        if (cpu == "Intel")
            cost += 200;

        if (ram == "16GB")
            cost += 300;
        else if (ram == "32GB")
            cost += 500;

        if (hardDrive == "SSD")
            cost += 500;

        if (computerType == "Laptop")
            cost += 300;
        else if (computerType == "Tablet")
            cost -= 200;

        return cost;
    }

    void display()
    {
        cout << "\nComputer Make: " << make;
        cout << "\nComputer Model: " << model;
        cout << "\nComputer CPU: " << cpu;
        cout << "\nComputer RAM: " << ram;
        cout << "\nHard Drive: " << hardDrive;
        cout << "\nComputer Type: " << computerType;

        cout << "\nComputer Cost: $"
            << fixed << setprecision(2) << getCost();

        cout << "\n";
    }
};

int main()
{
    Computer computer;

    string make, model, cpu, ram, hardDrive, type;

    while (true)
    {
        cout << "\nEnter Computer Make (Ctrl+Z to stop): ";

        if (!(cin >> make))
            break;

        cout << "Enter Computer Model: ";
        cin >> model;

        cout << "Enter CPU (Intel or AMD): ";
        cin >> cpu;

        cout << "Enter RAM (8GB, 16GB, 32GB): ";
        cin >> ram;

        cout << "Enter Hard Drive (SSD or HD): ";
        cin >> hardDrive;

        cout << "Enter Computer Type: ";
        cin >> type;

        computer.setMake(make);
        computer.setModel(model);
        computer.setCPU(cpu);
        computer.setRAM(ram);
        computer.setHardDrive(hardDrive);
        computer.setComputerType(type);

        computer.display();
    }

    return 0;
}