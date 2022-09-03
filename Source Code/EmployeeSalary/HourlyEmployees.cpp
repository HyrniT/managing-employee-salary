#include "HourlyEmployees.h"

void HourlyEmployees::setHours(int hours)
{
    Hours = hours;
}

HourlyEmployees::HourlyEmployees()
{
    Hours = 0;
    HourlyPayment = 0;
}

int HourlyEmployees::getHours()
{
    return Hours;
}

int HourlyEmployees::getSalary()
{
    return Salary;
}

void HourlyEmployees::calculateSalary()
{
    Salary = Hours * HourlyPayment;
}

void HourlyEmployees::input()
{
    Person::input();
    cout << "Insert number of hours: ";
    cin >> Hours;
    cout << "Insert hourly payment: ";
    cin >> HourlyPayment;
}

void HourlyEmployees::output()
{
    cout << endl;
    Person::output();
    cout << "Number of hours: " << Hours << "; ";
    cout << "Hourly Payment: " << HourlyPayment << endl;
}

void HourlyEmployees::read(string data)
{
    string res1 = "";
    string res2 = "";
    res1 = data.substr(17, data.find("$"));
    HourlyPayment = stoi(res1);
    res2 = data.substr(data.find("$") + 14);
    Hours = stoi(res2);
}
