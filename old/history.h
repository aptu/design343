// History class declaration
#include "transaction.h"

class History : public Transaction {
public:
	History();
	bool process();	// account history display method
		// check if system has accountID
		// iterate through transaction log
			// if transaction account ID matches target
				// add to account history list
		// display account history list
};