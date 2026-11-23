#include <iostream>
#include <string>
#include <algorithm>
#include <iomanip>

int week4p2 ()
{


    std::string item;
    std::cout << "Enter item (A or B): ";
    if (!(std::cin >> item)) return 0;
    std::transform(item.begin(), item.end(), item.begin(), ::toupper);

    int quantity = 0;
    std::cout << "Enter quantity: ";
    if (!(std::cin >> quantity)) quantity = 0;

    double unit_price = 0.0;
    if (item == "A")
        unit_price = 10.00;
    else if (item == "B")
        unit_price = 20.00;
    else {
        std::cout << "Invalid item." << std::endl;
        unit_price = 0.00;
    }

    double extended_price = quantity * unit_price;

    std::cout << "Item: " << item << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Unit Price: $" << unit_price << "\n";
    std::cout << "Extended Price: $" << extended_price << "\n";

    return 0;
}

