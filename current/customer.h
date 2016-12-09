using namespace std;
#include <iostream>

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer{
public:
    Customer(int id, string lastName, string firstName);
private:
    int id;
    string lastName;
    string firstName;
};
#endif