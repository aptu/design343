// TransactionExecutor class declaration
#include "borrow.h"
#include "return.h"
#include "history.h"
#include "inventory.h"
#include <iostream>
#include <fstream>
using namespace std;

class TransactionFactory {
public:
    TransactionFactory();
	~TransactionFactory();
	void readCommandSequence();
	void process(Borrow *e);
	void process(Return *e);
	void process(History *e);
	void process(Inventory *e);
	bool searchInventory(char type, string identifier); // identifier can be a director or title
private:
	Transaction* transactions;	// array of transactions
	System& store;	// reference to store
};