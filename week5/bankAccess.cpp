/*******************
 * TEST
 * ***************/

#include <iostream>
#include <string>
#include "BankAccount.hpp"

int main()
{

	BankAccount account1("Harry Potter", "K4637", 8032.78);
	account1.withdraw(244.00);
	account1.withdraw(3012.58);
	account1.deposit(37.54);
	account1.withdraw(1807.12);
	account1.deposit(500.00);
	double finalBalance = account1.getCustomerBalance();
	cout << finalBalance << endl;
	return 0;
}
