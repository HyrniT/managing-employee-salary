#pragma once
#include<vector>
#include "Person.h"
#include "DailyEmployees.h"
#include "HourlyEmployees.h"
#include "ProductEmployees.h"
#include "Manager.h"

class Company
{
private:
    vector<Person*> ListPerson;
public:
    ~Company();
    void input();
    void output();
    void read(string);
};

