#pragma once
#include "Person.h"

class ProductEmployees :public Person
{
private:
    int Products;
    int PaymentPerProduct;
public:
    ProductEmployees();
    void setProducts(int);
    int getProducts();
    int getSalary();
    void calculateSalary();

    //
    void input();
    void output();
    void read(string);
};

