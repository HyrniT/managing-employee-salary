#pragma once
#include "Person.h"

class HourlyEmployees :public Person
{
private:
    int Hours;
    int HourlyPayment;
public:
    HourlyEmployees();
    void setHours(int);
    int getHours();
    int getSalary();
    void calculateSalary();

    //
    void input();
    void output();
    void read(string);
};

