#pragma once
#include "Person.h"

class Manager :public Person
{
private:
    int FixedPayment;
    int TotalEmployees;
    int PaymentPerEmployee;
public:
    Manager();
    int getSalary();
    void calculateSalary();

    //
    void input();
    void output();
    void read(string);
};
