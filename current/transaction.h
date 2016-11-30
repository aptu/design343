class Transaction{
public:
    virtual void doTransaction();
    virtual void setData();

private:
    BSTree* tree;
    Hashtable* allCustomers;
    Customer* customer;
    int accountNum;
};