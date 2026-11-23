#include <iostream>
using namespace std;

int main()
{
    double exam1, exam2, total;

    cout << "Enter the first exam score: ";
    cin >> exam1;

    cout << "Enter the second exam score: ";
    cin >> exam2;

    total = (exam1 * 0.60) + (exam2 * 0.40);

    cout << "Total score: " << total << endl;

    return 0;
}