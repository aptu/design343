// Inventory class declaration
#include "transaction.h"

class Inventory : public Transaction {
public:
	Inventory();
	bool process();	// inventory display method
};