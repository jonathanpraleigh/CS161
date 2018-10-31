/*********************************************************
** Author : Jon Raleigh
** Date : 3/16/17
** Description : Customer class. Represents the customer:
**		 name, account ID, premium member status,
**		 and cart. Used to find customer details.    
**********************************************************/ 

#include "Customer.hpp"

Customer::Customer(std::string n, std::string a, bool pm)
{
	name = n;
	accountID = a;
	premiumMember = pm;
}

std::string Customer::getAccountID()
{
	return accountID;
}

std::vector<std::string> Customer::getCart()
{
	return cart;
}

void Customer::addProductToCart(std::string addProd)
{
	cart.push_back(addProd);
}

bool Customer::isPremiumMember()
{
	return premiumMember;
}

void Customer::emptyCart()
{
	cart.clear();
} 
