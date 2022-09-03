#pragma once
#include "Person.h"

class DailyEmployees :public Person
{
private:
    int Days;
    int DailyPayment;
public:
    DailyEmployees();
    void setDays(int);
    int getDays();
    int getSalary();
    void calculateSalary();

    //
    void input();
    void output();
    void read(string);
};