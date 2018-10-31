/****************************************************************
** Author : Jon Raleigh
** Date : 2/8/2017
** Description : Contains implementation for the BankAccount 
** class. Include constructors, get functions, and mutators
***************************************************************/

#include "BankAccount.hpp"
#include <string>
using namespace std; 

//the default constructor
BankAccount::BankAccount()
  {
	customerName = " ";
	customerID = " ";
	customerBalance = 0;
  }


//constructor hands over three values and initializes them	
BankAccount::BankAccount (string custName, string custID, double custBalance)
  {
	customerName = custName;
	customerID = custID;
	customerBalance = custBalance; 
  }

 
//won't comment on get and set functions going forward per code style guidelines
string BankAccount::getCustomerName()
  {
	return customerName;
  }


string BankAccount::getCustomerID()
  {
	return customerID;
  }


double BankAccount::getCustomerBalance()
  {
	return customerBalance;
  }


/*******************************************************
** Description : decreases customerBalance by withdrawal amount
******************************************************/  
void BankAccount::withdraw(double withAmt)
  {
	customerBalance -= withAmt; 
  }


/*******************************************************
** Description : increases customerBalance by deposit amount
*******************************************************/ 
void BankAccount::deposit(double depAmt)	
  {
	customerBalance += depAmt; 
  }  
