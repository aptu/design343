// HashTable class definition
#ifndef HASHTABLE_H
#define HASHTABLE_H

template <typename K, typename V>
class HashTable {
public:
	// Constructor, destructor
	HashTable();
	~HashTable();
	// Member functions
	bool put(K key, V value);	// adds key value pair to table
	bool remove(K key);			// removes account from list
	V getValue(K key);			// returns if key exists in table
	K getKey(V value);			// returns if value exists in table
	void display() const;		// displays list of items

private:
	V* table;	// table stores values
	int size;	// size of table
};

#endif