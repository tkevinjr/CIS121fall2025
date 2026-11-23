#include <iostream>
#include <iomanip>

int main() {
    int quantity;
    std::cout << "Enter quantity: ";
    if (!(std::cin >> quantity)) return 1;

    double unit_price;
    if (quantity >= 1000)
        unit_price = 3.00;
    else
        unit_price = 5.00;

    double extended_price = quantity * unit_price;
    double tax = extended_price * 0.07;
    double total = extended_price + tax;

    std::cout << "Quantity: " << quantity << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Unit Price: $" << unit_price << '\n';
    std::cout << "Extended Price: $" << extended_price << '\n';
    std::cout << "Tax: $" << tax << '\n';
    std::cout << "Total: $" << total << '\n';

    return 0;
}
