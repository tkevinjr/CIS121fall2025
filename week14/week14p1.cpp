#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Membership
{
private:
    string firstName;
    string lastName;
    int age;
    string membershipType;

public:
    Membership()
    {
        firstName = "Not Entered";
        lastName = "Not Entered";
        age = 18;
        membershipType = "Bronze";
    }

    void setFirstName(string name)
    {
        firstName = name;
    }

    string getFirstName()
    {
        return firstName;
    }

    void setLastName(string name)
    {
        lastName = name;
    }

    string getLastName()
    {
        return lastName;
    }

    void setAge(int a)
    {
        age = a;
    }

    int getAge()
    {
        return age;
    }

    void setMembershipType(string type)
    {
        membershipType = type;
    }

    string getMembershipType()
    {
        return membershipType;
    }

    double getMembershipCost()
    {
        double cost;

        if (membershipType == "Gold")
            cost = 1200.00;
        else if (membershipType == "Silver")
            cost = 1000.00;
        else
            cost = 500.00;

        if (age > 50)
            cost = cost * 0.90;

        return cost;
    }

    void display()
    {
        cout << "\nFirst Name: " << firstName;
        cout << "\nLast Name: " << lastName;
        cout << "\nAge: " << age;
        cout << "\nMembership Type: " << membershipType;
        cout << "\nMembership Cost: $"
            << fixed << setprecision(2) << getMembershipCost();
        cout << "\n";
    }
};

int main()
{
    Membership member;
    string first, last, type;
    int age;

    while (true)
    {
        cout << "\nEnter First Name (Ctrl+Z to stop): ";

        if (!(cin >> first))
            break;

        cout << "Enter Last Name: ";
        cin >> last;

        cout << "Enter Age: ";
        cin >> age;

        cout << "Enter Membership Type (Gold, Silver, Bronze): ";
        cin >> type;

        member.setFirstName(first);
        member.setLastName(last);
        member.setAge(age);
        member.setMembershipType(type);

        member.display();
    }

    return 0;
}
