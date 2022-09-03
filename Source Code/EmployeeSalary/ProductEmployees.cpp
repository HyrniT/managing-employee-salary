#include "ProductEmployees.h"

void ProductEmployees::setProducts(int products)
{
    Products = products;
}

ProductEmployees::ProductEmployees()
{
    Products = 0;
    PaymentPerProduct = 0;
}

int ProductEmployees::getProducts()
{
    return Products;
}

int ProductEmployees::getSalary()
{
    return Salary;
}

void ProductEmployees::calculateSalary()
{
    Salary = Products * PaymentPerProduct;
}

void ProductEmployees::input()
{
    Person::input();
    cout << "Insert number of products: ";
    cin >> Products;
    cout << "Insert payment per product: ";
    cin >> PaymentPerProduct;
}

void ProductEmployees::output()
{
    cout << endl;
    Person::output();
    cout << "Number of products: " << Products << "; ";
    cout << "Payment per product: " << PaymentPerProduct << endl;
}

void ProductEmployees::read(string data)
{
    string res1 = "";
    string res2 = "";
    res1 = data.substr(21, data.find("$"));
    PaymentPerProduct = stoi(res1);
    res2 = data.substr(data.find("$") + 17);
    Products = stoi(res2);
}
