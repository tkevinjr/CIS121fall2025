#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

struct Student
{
    string firstName;
    string lastName;
    double gpa;
};

void loadStudents(vector<Student>& students)
{
    ifstream infile("StudentData.txt");

    if (!infile)
    {
        cout << "Error opening file." << endl;
        return;
    }

    Student temp;

    while (students.size() < 10 &&
        infile >> temp.firstName
        >> temp.lastName
        >> temp.gpa)
    {
        students.push_back(temp);
    }

    infile.close();
}

void displayStudents(const vector<Student>& students)
{
    cout << fixed << setprecision(2);

    cout << "Student Information" << endl;
    cout << "------------------------" << endl;

    for (int i = 0; i < students.size(); i++)
    {
        cout << "First Name: "
            << students[i].firstName << endl;

        cout << "Last Name: "
            << students[i].lastName << endl;

        cout << "GPA: "
            << students[i].gpa << endl;

        cout << endl;
    }
}

int main()
{
    vector<Student> students;

    loadStudents(students);
    displayStudents(students);

    return 0;
}