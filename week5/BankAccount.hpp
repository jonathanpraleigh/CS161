/*****************************************************************************
** Author : Jon Raleigh
** Date : 2/8/2017
** Description : Header file for the BankAccount class.    
****************************************************************************/

#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>

using namespace std;

class BankAccount
{
	private:
		string customerName;
		string customerID;
		double customerBalance;


	public:
		BankAccount(); 
		BankAccount(string, string, double); 
		string getCustomerName();
		string getCustomerID();
		double getCustomerBalance();
		void withdraw(double);
		void deposit(double);

};
#endif 
