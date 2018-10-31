/*****************************************************
** Author : Jon Raleigh
** Date : 3/16/17
** Description : Represents the store, which has some numbers
**		 of products in its inventory and some
**		 number of customers as members.
******************************************************/

#include "Store.hpp"

void Store::addProduct(Product* p)
{
//adds a product to the inventory
	inventory.push_back(*p);	
}

void Store::addMember(Customer* c)
{
//adds a customer to the members
	members.push_back(*c);
}

Product* Store::getProductFromID(std::string id)
{
//returns pointer to product with matching ID. Returns NULL if
//no matching ID is found.
	for (int count=0; count < Product*.size(); count++)
	  {
		if (id == *inventory(count).getIdCode())
		  return *inventory(count);
	  }
	return NULL;	 
}

Customer* Store::getMemberFromID(std::string id)
{
//returns pointer to customer with matching ID. Returns NULL if no
//matching ID is found.
	 for (int count=0; count < Customer*.size(); count++)
	  {
		if (id == *members(count).getAccountID())
		  return *members(count);
	  }
	return NULL;	
}

void Store::productSearch(std::string str)
{
//use string::find() or string::npos
//for example:
//if(stringToSearch.find(stringToFind, 0) == std::string::npos)
//{ // your search string was not found...} }

//for every proudct whose title or description contains the string,
//prints out that product's title, ID code, price, and description.
//The first letter of the search string should be case-sensitive,
//ie a search for wood should match Products that have "Wood" in 
//their title or description, and a search for "Wood" should match
//proudcts that have "wood in their title or description.

//string is received.
//every product is title and description string is searched
//if matches, prints out title, ID code, price, and description and proceeds
//to the next match doing the same.
//If no matches, prints no match.
}

void Store::addProductToMemberCart(std::string pID, std::string mID)
{
	int idHolder;
	int memberHolder;
	int qtyHolder;
	bool found;
	bool member;
	int count = 0;	

	for (int index=0; index<inventory.size(); index++)
	  {
		if (pID == inventory[index].getIdCode())
		  {
			idHolder = index;
		 	qtyHolder = inventory[index].getQuantityAvailable();
		  	found = true;
			//will this lose value out of scope?
		   }
	  }

	if (found != true)	 
	  {
		cout << "Product # " << pID << " not found." << endl;
		return;
	  }   

	for (int index=0; index<members.size(); index++)
	  {
		if mID == (members[index].getAccountID())
		  {
			memberHolder = index;
			member = true;
		  }	
	  }
	
	if (member != true)
	  {
		cout << "Member # " << mID << " not found." << endl;
		return;
	  }

	if (inventory[idHolder].getQuantityAvailable() < 1)
	  {
		cout 
		<< "Sorry, product # " 
		<< pID 
		<< " is currently out of stock." 
		<< endl;
		return;		
	  }	
	
	for (int index=0; index<cart.size(); index++)
	  {
		//something here about accessing cart contents to check
		//against and get count, subtract from qty avilable 
		//to see if possible below.
		if ((members[memberHolder].getCart)[index] == pID)
		{count++;} 		
	  }	

	if (inventory[idHolder].getQuantityAvailable() - count > 0)
	  {
		members[memberHolder].addProductToCart(pID);
		return;
  	  }
	else 
	  {
		cout
		<< "Sorry, product # "
		<< pID
		<< " is currently out of stock."
		<< endl;
		return;
	  }
	 
}

void Store::checkOutMember(std::string mID)
{
	int validMemberIndexLocation;
	bool isMember;

//prints out the title and price for each 
//product in the cart and decrease the available quantity of that product
//by 1. If any proudct has already sold out, then on that line it should print
//'Sorry, product #[idCode goes here], "[product name goes here]" is no longer
//avaiable.' At the bottom it should print out the subtotal for the cart, 
//the shipping cost ($0 for premium members, 7% of the cart cost for
//normal members), and the final total cost for the cart (subtotal plus
//shipping). If the cart is empty, it should just print "There are no
//items in the cart." WHen the calculations are complete, the member's 
//cart should be emptied. 

	for (int index=0; index<members.size(); index++)
	  {
		if (mID == members[index].getAccountID())
		  {
			validMemberIndexLocation = index;
			isMember = true;
		  }	
	  }
	
	if (isMember != true)
	  {
		cout << "Member # " << mID << " not found." << endl;
		return;
	  }
	
//prints function members[validMemberIndexLocation].getCart();
//if empty prints cart is empty.
//list item price next to it
//decreases qty of each item by 1.
//if qty = 0, say no longer available.
//subtotal 
//if premium member shipping = 0
//if not, shipping = subtotal x .07
//final cost below 
//Checks member array for member ID. If not found, prints error message.
//If cart is empty, prints There are no items in the cart.
//If found, prints "cart" title and price for each product.
//decreases quantity available for each product by 1. 
//If product is sold out, print error message. and excludes from total.
//Bottom prints subtotal.
//Bool check for membership. If member, shipping = 0. If not, shipping 
//equals subtotal *1.07.
//Final line adds subtotal and shipping for total.
//Cart is then emptied out. 
}

