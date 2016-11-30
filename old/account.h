// Account represents a customer's account with their unique 4-digit ID, their first name, and their last name.
// Allows for getting and setting each attribute, and displaying the transaction history.
class Account {
public:
	Account();
	Account(int id, string first, string last);
	int getID() const;
	string getFirstName() const;
	string getLastName() const;
	void setID(int id);
	void setFirstName(string first);
	void setLastName(string last);
	void display() const;
private:
	string firstName, lastName;
	int accountID;
};