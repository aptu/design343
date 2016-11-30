// Transaction class declaration
#include "item.h"
#include "movie.h"
#include "comedy.h"
#include "drama.h"
#include "classic.h"
#include <iostream>

class Transaction {
public:
	Transaction();
	bool validID() const;
	virtual bool process();
private:
	int accountID;
};