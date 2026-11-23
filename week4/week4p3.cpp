#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

int week4p3()
{
    int num_books;
    std::cout << "Enter number of books: ";
    while (!(std::cin >> num_books)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter number of books: ";
    }

    double cost_per_book;
    std::cout << "Enter cost per book: ";
    while (!(std::cin >> cost_per_book)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter cost per book: ";
    }

    double order_total = num_books * cost_per_book;
    double shipping = (order_total > 50.00) ? 0.00 : 25.00;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Order Total: $" << order_total << '\n';
    std::cout << "Shipping Charge: $" << shipping << "\n\n";

    // Read appliance info
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::string name;
    std::cout << "Enter appliance name: ";
    std::getline(std::cin, name);

    double cost;
    std::cout << "Enter appliance cost: $";
    while (!(std::cin >> cost)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Enter appliance cost: $";
    }

    double warranty = (cost > 1000.0) ? cost * 0.10 : cost * 0.05;
    double total = cost + warranty;

    std::cout << "Appliance: " << name << '\n';
    std::cout << "Cost: $" << cost << '\n';
    std::cout << "Warranty Cost: $" << warranty << '\n';
    std::cout << "Total: $" << total << '\n';

    return 0;
}
