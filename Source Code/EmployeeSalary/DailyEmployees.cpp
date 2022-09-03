#include "DailyEmployees.h"

void DailyEmployees::setDays(int days)
{
    Days = days;
}

DailyEmployees::DailyEmployees()
{
    Days = 0;
    DailyPayment = 0;
}

int DailyEmployees::getDays()
{
    return Days;
}

int DailyEmployees::getSalary()
{
    return Salary;
}

void DailyEmployees::calculateSalary()
{
    Salary = Days * DailyPayment;
}

void DailyEmployees::input()
{
    Person::input();
    cout << "Insert number of days: ";
    cin >> Days;
    cout << "Insert daily payment: ";
    cin >> DailyPayment;
}

void DailyEmployees::output()
{
    cout << endl;
    Person::output();
    cout << "Number of days: " << Days << "; ";
    cout << "Daily Payment: " << DailyPayment << endl;
}

void DailyEmployees::read(string data)
{
    string res1 = "";
    string res2 = "";
    res1 = data.substr(16, data.find("$"));
    DailyPayment = stoi(res1);
    res2 = data.substr(data.find("$") + 13);
    Days = stoi(res2);
}
