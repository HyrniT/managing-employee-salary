#include "Company.h"
#include<Windows.h>

Company::~Company()
{
    for (int i = 0; i < ListPerson.size(); i++)
        delete ListPerson[i];
}

void Company::input()
{
    while (true)
    {
        int key = 0;
        cout << "Insert type of person (1.DailyEmployee - 2.HourlyEmployee - 3.ProductEmployee - 4.Manager - 0.To Quit): ";
        cin >> key;
        Person* temp = nullptr;
        if (key == 1)
        {
            temp = new DailyEmployees;
        }
        if (key == 2)
        {
            temp = new HourlyEmployees;
        }
        if (key == 3)
        {
            temp = new ProductEmployees;
        }
        if (key == 4)
        {
            temp = new Manager;
        }
        if (key == 0)
            break;
        temp->input();
        ListPerson.push_back(temp);
    }
}

void Company::output()
{
    cout << endl << "LIST OF EMPLOYEES:";
    for (Person* p : ListPerson)
    {
        p->output();
        p->calculateSalary();
        cout << "Total Salary: " << p->getSalary() << endl;
    }
}

void Company::read(string fileName)
{
    string res1 = "";
    string res2 = "";
    Person* temp = nullptr;
    ifstream fin(fileName);
    if (fin.is_open())
    {
        cout << endl << "Read file success!" << endl;
        system("pause");
    }
    else
    {
        cout << endl << "Read file error!" << endl;
        system("pause");
        exit(0);
    }
    while (!fin.eof())
    {
        getline(fin, res1);
        res2 = res1.substr(res1.find(" ") + 1);
        string type = res1.substr(0, res1.find(":"));
        if (type == "DailyEmployee")
        {
            temp = new DailyEmployees;
        }
        if (type == "HourlyEmployee")
        {
            temp = new HourlyEmployees;
        }
        if (type == "ProductEmployee")
        {
            temp = new ProductEmployees;
        }
        if (type == "Manager")
        {
            temp = new Manager;
        }
        temp->setName(res2);
        getline(fin, res1);
        temp->read(res1);
        ListPerson.push_back(temp);
    }
    fin.close();
}
