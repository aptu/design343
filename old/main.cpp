#include <iostream>
#include "system.h"
#include "hashtable.h"



int main() {
	HashTable<char, BST<Item>> inventory;
	BST<Comedy> comedy;
	inventory.put('C', comedy);

	Item *foo = new Comedy();

}
