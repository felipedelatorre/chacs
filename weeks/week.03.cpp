//3.9, 3.10, 3.12 and 3.13

// 3.9 Modified Account Class
#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	Account account1{"Felipe Delatorre", 10};
	Account account2{ "Lidia Santos", 500 };

	cout << "account1: " << account1.getName() << " balance is $" << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is $" << account2.getBalance();

	cout << "\n\nEnter deposit amount for account 1: ";
	int depositAmount;
	cin >> depositAmount;
	cout << "Adding " << depositAmount << " to account balance";
	account1.deposit(depositAmount);

	cout << "\n\nEnter withdraw amount for account 1: ";
	int withdrawAmount;
	cin >> withdrawAmount;
	account1.withdraw(withdrawAmount);

	cout << "\n\naccount1: " << account1.getName() << " balance is " << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is " << account2.getBalance();

	cout << "\n\nEnter deposit amount for account 2: ";
	cin >> depositAmount;
	cout << "Adding " << depositAmount << " to account balance";
	account2.deposit(depositAmount);

	cout << "\n\naccount1: " << account1.getName() << " balance is " << account1.getBalance();
	cout << "\naccount2: " << account2.getName() << " balance is " << account2.getBalance() << endl;


}

#include <string>

class Account {
public: 

	Account(std::string accountName, int initialBalance)
		: name{ accountName } {

		if (initialBalance > 0) {
			balance = initialBalance;
		}
	}

	void deposit(int depositAmount) {
		if (depositAmount > 0) {
			balance = balance + depositAmount;
		}
	}

	void withdraw(int withdrawAmount) {
		if (withdrawAmount < balance) {
			balance = balance - withdrawAmount;
			std::cout << "Subtracting " << withdrawAmount << " to account balance" << std:: endl;
		}
		if (withdrawAmount > balance) {
			std::cout << "Withdraw amount exceeds balance" << std::endl;
		}
	}

	int getBalance() const {
		return balance;
	}

	void setName(std::string accountName) {
		name = accountName;
	}

	std::string getName() const {
		return name;
	}

private:
	std::string name;
	int balance{ 0 };
};

//3.10 Invoice Class
#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	Invoice item1{"123", "Dell", 0, 3};

	cout << "The part number is " << item1.getPartNum() << ". It is build by " << item1.getPartDesc() << ". Amount ordered is " << item1.getQuant() << ". The cost is per item is $" << item1.getPrice() << endl;
	cout << "\n\nPlease enter the amount you would like to ordered: ";
	int orderAmount;
	cin >> orderAmount;
	item1.order(orderAmount);

	cout << "Order quantity: " << item1.getQuant() << endl;
	cout << "Order Total: " << item1.getInvoiceAmount() << endl;

}

#include <string>

class Invoice {
public: 

	Invoice(std::string partNumber, std::string partDescription, int itemQuantity, int itemPrice)
		: partnum{ partNumber }, partdesc{ partDescription }, quant{ itemQuantity }, price{ itemPrice } {
	}

	void order(int orderAmount) {
		if (orderAmount > 0) {
			quant = quant + orderAmount;
		}
	}

	int getInvoiceAmount() {
		invoice = price * quant;
		return invoice;
	}

	int getPrice() {
		return price;
	}
	
	int getQuant() {
		return quant;
	}
	
	void setPartDesc(std::string partDescription) {
		partdesc = partDescription;
	}

	std::string getPartDesc() const {
		return partdesc;
	}

	void setPartNum(std::string partNumber) {
		partnum = partNumber;
	}

	std::string getPartNum() const {
		return partnum;
	}

private:
	std::string partnum;
	std::string partdesc;
	int quant;
	int price;
	int invoice;
};

//3.12 Date Class
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

int main() {
	Date myDate{ 10, 5 ,2005 };

	myDate.displayDate();

}

#include <string>

class Date {
public:
	Date(int initialYear, int initialMonth, int initialDay)
	{
		setYear(initialYear);
		setMonth(initialMonth);
		setDay(initialDay);
	}

	void setYear(int initalYear) {
		year = initalYear;
	}

	void setMonth(int initalMonth) {
		month = initalMonth;
	}

	void setDay(int setDay) {
		day = setDay;
	}

	void displayDate() {
		std::cout << "Today's date is: " << month << "/" << day << "/" << year << std::endl;
	}



private:
	int year;
	int month;
	int day;
};

//3.13 Removing Duplicated Code in the Main Fuction
// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Account.h"

using namespace std;

void displayAccount(Account accountToDisplay) {
	cout << "account1: " << accountToDisplay.getName() << " balance is $"
		<< accountToDisplay.getBalance();
}


int main()
{
	Account account1{ "Jane Green", 50 };
	Account account2{ "John Blue", -7 };

	// display initial balance of each object
	displayAccount(account1);
	displayAccount(account2);


	cout << "\n\nEnter deposit amount for account1: "; // prompt
	int depositAmount;
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account1 balance";
	account1.deposit(depositAmount); // add to account1's balance

									 // display balances
	displayAccount(account1);
	displayAccount(account2);

	cout << "\n\nEnter deposit amount for account2: "; // prompt
	cin >> depositAmount; // obtain user input
	cout << "adding " << depositAmount << " to account2 balance";
	account2.deposit(depositAmount); // add to account2 balance

									 // display balances
	displayAccount(account1);
	displayAccount(account2);
}