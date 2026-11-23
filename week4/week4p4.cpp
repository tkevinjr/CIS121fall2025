#include <iostream>
#include <string>
#include <iomanip>

int week4p4()
{
    std::string name;
    double cost = 0.0;

    std::cout << "Enter appliance name: ";
    std::getline(std::cin, name);

    std::cout << "Enter appliance cost: $";
    if (!(std::cin >> cost)) {
        std::cerr << "Invalid cost input.\n";
        return 1;
    }

    double warranty = (cost > 1000.0) ? cost * 0.10 : cost * 0.05;
    double total = cost + warranty;

    std::cout << "Appliance: " << name << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Cost: $" << cost << "\n";
    std::cout << "Warranty Cost: $" << warranty << "\n";
    std::cout << "Total: $" << total << "\n";

    return 0;
}
