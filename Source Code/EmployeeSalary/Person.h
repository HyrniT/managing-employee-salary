#pragma once
#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

class Person
{
protected:
    string FullName;
    int Salary;
public:
    Person();
    Person(const Person&);
    void setName(string);
    string getName();
    virtual void calculateSalary() = 0;
    virtual int getSalary() = 0;

    //
    virtual void input();
    virtual void output();
    virtual void read(string) = 0;
};

