// AccountManager declaration

#include "account.h"
#include "hashtable.h"

class AccountManager {
public:
	AccountManager();
	~AccountManager();
	void readAccountData(istream& file);// inputs customer data, creates hashtable
	bool addAccount(Account account);	// adds Account object to hashtable
	bool contains(int id) const;		// returns if ID exists in account hashtable
	void display() const;				// displays all accounts
private:
	HashTable<int, Account> accounts;	// a hashtable of accounts
};