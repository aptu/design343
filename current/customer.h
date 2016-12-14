using namespace std;
#include <iostream>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
public:
    Customer(int id, string lastName, string firstName):
         id(id), lastName(lastName), firstName(firstName)
    { }

    ~Customer(){}

    void setCustomer();
    void display();
    void addTransaction();
    void getHistory();


private:
    int id;
    string lastName;
    string firstName;
};
#endif
