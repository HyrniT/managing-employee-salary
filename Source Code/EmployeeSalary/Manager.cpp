#include "Manager.h"

Manager::Manager()
{
    FixedPayment = 0;
    TotalEmployees = 0;
    PaymentPerEmployee = 0;
}

int Manager::getSalary()
{
    return Salary;
}

void Manager::calculateSalary()
{
    Salary = FixedPayment + TotalEmployees * PaymentPerEmployee;
}

void Manager::input()
{
    Person::input();
    cout << "Insert fixed salary: ";
    cin >> FixedPayment;
    cout << "Insert total number of employees: ";
    cin >> TotalEmployees;
    cout << "Insert payment per employee: ";
    cin >> PaymentPerEmployee;
}

void Manager::output()
{
    cout << endl;
    Person::output();
    cout << "Fixed Payment: " << FixedPayment << "; ";
    cout << "Total Employees: " << TotalEmployees << "; ";
    cout << "Payment Per Employee: " << PaymentPerEmployee << endl;
}

void Manager::read(string data)
{
    string res1 = "";
    string res2 = "";
    res1 = data.substr(16, data.find("$"));
    FixedPayment = stoi(res1);
    res2 = data.substr(data.find("TotalEmployees="));
    TotalEmployees = stoi(res2.substr(15, res2.find(";")));
    res2 = data.substr(data.find("PaymentPerEmployee="));
    PaymentPerEmployee = stoi(res2.substr(19));
}
