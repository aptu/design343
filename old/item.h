// Item class declaration
#include <string>
using namespace std;

#ifndef ITEM_H
#define ITEM_H

class Item {
public:
	Item();
	Item(char type, int stock);
	virtual char getType() const;	// return item type, virtual
	int getStock() const;			// get number of items in stock
	void setType(char type);				// sets item type
	bool checkout();				// decrement stock by 1 if possible
	void checkin();					// increment stock by 1
	virtual void display() const;	// displays item information
protected:
	char type;		// item type
	int stock;		// number of items in inventory stock
};
#endif // !ITEM_H