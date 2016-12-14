#include "bst.h"
#include "hashTable.h"

class Transaction{
public:

    Transaction() {}
    virtual ~Transaction() {}

    virtual void doTransaction();
    virtual void setData();
    virtual void display();

private:
    BSTree* tree;
    Hashtable* allCustomers;
    Customer* customer;
    int accountNum;
};
