#include "Person.h"

Person::Person()
{
    FullName = "NULL";
    Salary = 0;
}

Person::Person(const Person& P)
{
    FullName = P.FullName;
    Salary = P.Salary;
}

void Person::setName(string fullName)
{
    FullName = fullName;
}

void Person::input()
{
    cout << "Insert full name: ";
    cin.ignore();
    getline(cin, FullName);
}

void Person::output()
{
    cout << "Full Name: " << FullName << endl;
}

string Person::getName()
{
    return FullName;
}
