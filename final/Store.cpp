/*****************************************************
** Author : Jon Raleigh
** Date : 3/16/17
** Description : Represents the store: includes a 
**		 vector of the inventory and customers,
**		 and manipulates each. Also can search
**		 for products and members using ID #s.
**		 Performs cart and checkout functions as 
**		 well.	
******************************************************/

#include "Store.hpp"
#include "Customer.hpp"
#include "Product.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


/*******************************************************
** Description : Adds a product pointer to the inventory.
********************************************************/
 
void Store::addProduct(Product* p)
{
	inventory.push_back(p);	
}

/*******************************************************
** Description : Adds customer pointer to the member list.
********************************************************/

void Store::addMember(Customer* c)
{
	members.push_back(c);
}

/*******************************************************
** Description : Locates product pointer using ID #. 
********************************************************/

Product* Store::getProductFromID(std::string id)
{
	for (int count = 0; count < inventory.size(); count++)
	  {
		if (id == inventory[count]->getIdCode())
	
		return inventory[count];
	  }
	return NULL;	 
}

/*******************************************************
** Description : Locates customer pointer using ID #.
********************************************************/

Customer* Store::getMemberFromID(std::string id)
{
	for (int count=0; count < members.size(); count++)
	  {
		if (id == members[count]->getAccountID())
	  
		return members[count];
	  }

	return NULL;	
}

/*******************************************************
** Description : Searches title and description for a
** 		 string of text. Changes to upper and 
**		 lower case, then searches each inventory
**		 item for the strings.	
********************************************************/

void Store::productSearch(std::string str)
{
	std::string str2 = str;
	std::string searchTitleString;
	std::string searchDescriptionString;
	std::vector<Product*> results;
	bool pSFound;
	bool *pPSFound = &pSFound;

	if (islower(str[0]) == true)
	  {
		toupper(str2[0]);
	  }
	else
		tolower(str2[0]);

//duplicates str and makes one upper and one lower case. 

	for (int count = 0; count < inventory.size(); count++)
	  { 
		searchTitleString = inventory[count]->getTitle();
		searchDescriptionString = inventory[count]->getDescription();

		if ((searchTitleString.find(str) != std::string::npos) ||
			(searchTitleString.find(str2) != std::string::npos) ||
			(searchDescriptionString.find(str) != std::string::npos) ||
			(searchDescriptionString.find(str) != std::string::npos))
		  {
			std::cout
				<< inventory[count]->getTitle()
				<< "\nID code: "
				<< inventory[count]->getIdCode()
				<< "\nprice: $"
				<< inventory[count]->getPrice()
				<< std::endl;
			std::cout
				<< inventory[count]->getDescription();
			*pPSFound = true;
		  }
	  }

//if str or str2 matches either title or description, prints out the results. If found, 
//changes pSFound value to true and runs the next string if not found.
	
	if (*pPSFound != true)
	  {
		std::cout
			<< "Not found."
			<< std::endl;
	  }

}

/*******************************************************
** Description : Searches for customer and item #. If 
		 both exist, passes the item to the 
		 customer's cart. 
********************************************************/

void Store::addProductToMemberCart(std::string pID, std::string mID)
{
	int idHolder;
	int *pIdHolder = &idHolder;
	int memberHolder;
	int *pMemberHolder = &memberHolder;
	std::string mIDTest;
	bool cartFound;
	bool *pCartFound = &cartFound;
	bool member = false;
	bool *pMember = &member;
	int count = 0;	


	for (int index=0; index<inventory.size(); index++)
	  {
		if (pID == inventory[index]->getIdCode())
		  {
			*pIdHolder = index;
		  	*pCartFound = true;
		   }
	  }

//checks the inventory for the ID code. sets cartfound to true and idholder stores index to 
//be called later.

	if (*pCartFound != true)	 
	  {
		std::cout << "Product # " << pID << " not found." << std::endl;
		return;
	  }   

//prints ID not found if item isn't found.

	for (int i = 0; i < members.size(); i++)
	  {
		mIDTest = members[i]->getAccountID();

		if ( mID == mIDTest)
		  {
			*pMemberHolder = i;
			*pMember = true;
		  }	
	  }
	
//pulls account ID and stores the i number to call it back later to locate member.  
//also stores premium member status.

	if (member != true)
	  {
		std::cout << "Member # " << mID << " not found." << std::endl;
		return;
	  }


	if ( inventory[idHolder]->getQuantityAvailable() < 1)
	  {
		std::cout 
		<< "Sorry, product # " 
		<< pID 
		<< " is currently out of stock." 
		<< std::endl;
		return;		
	  }	

//Error messages for member ID and quantity.

	if (inventory[idHolder]->getQuantityAvailable() - count > 0)
	  {
		members[memberHolder]->addProductToCart(pID);
		return;
  	  }
	else 
	    {
		std::cout
		<< "Sorry, product # "
		<< pID
		<< " is currently out of stock."
		<< std::endl;
		return;
	    }
	 
}

//adds to cart if there is an available quantity.

/*******************************************************
** Description : Final function that lists all of the 
**		 purchased items, their prices, a subtotal
**		 shipping if any, and a total. Then it 
**		 proceeds to clear out the cart.
********************************************************/

void Store::checkOut(std::string mID)
{
	int validMemberIndexLocation;
	int *pValidMemberIndexLocation = &validMemberIndexLocation;
	bool isMember = false;
	bool *pIsMember = &isMember;
	double subtotal = 0.0;
	double *pSubtotal = &subtotal;
	double shipping;
	double total;
	std::vector <std::string> tempCart;


	for (int index = 0; index < members.size(); index++)
	  {
		if (mID == members[index]->getAccountID() || isMember == true)
		  {
			*pValidMemberIndexLocation = index;
			*pIsMember = true;
		  }
	  }

//searches the members and stores the index # to retrive later if found.

	if (isMember != true)
	  {  
		std::cout << "Member # " << mID << " not found." << std::endl;
		return;
	  }

//error message.

	tempCart = members[validMemberIndexLocation]->getCart();

//tempCart because I couldn't get around overloading "->"   

	if (tempCart.size() <= 0)
	  {
		std::cout << "Your cart is empty." << std::endl;
		return;
	  }

//error message

	for (int count = 0; count < tempCart.size(); count++)
	  {
		std::string idHolder;
		int quantityAvailable;
		std::string title;
		double price;


		idHolder = tempCart[count];
		
		quantityAvailable = getProductFromID(idHolder)->getQuantityAvailable();
		title = getProductFromID(idHolder)->getTitle();
		price = getProductFromID(idHolder)->getPrice();
		

		if (quantityAvailable < 1)
		  {
			std::cout
				<< "Sorry product #"
				<< idHolder
				<< " , "
				<< title
				<< " is not available."
				<< std::endl;
		  }
		else
		  {
			std::cout
				<< title
				<< " - $"
				<< std::fixed			
				<< std::setprecision(2)
				<< price
				<< std::endl;

			subtotal += price;
			getProductFromID(idHolder)->decreaseQuantity();
		  }
	  }  

//Loop uses the idholder from above to pull the products and their titles/prices/quantities.
//displays details if found, adds the price to the subtotal and decreases the quantity. 

	std::cout 
		<< "Subtotal : " 
		<< std::fixed			
		<< std::setprecision(2)
		<< subtotal 
		<< std::endl;

//displays subtotal.

	if (members[validMemberIndexLocation]->isPremiumMember() == true)
	  {
		shipping = 0;
	  }
	else
	  {
		shipping = subtotal * 0.07;
	  }

//calculates shipping

	std::cout 
		<< "Shipping : " 
		<< std::fixed			
		<< std::setprecision(2)
		<< shipping 
		<< std::endl;

	total = subtotal + shipping;

	std::cout 
		<< "Total : " 
		<< std::fixed			
		<< std::setprecision(2)
		<< total 
		<< std::endl;

//displays shipping and total.

	members[validMemberIndexLocation]->emptyCart();

//empties the cart.
}


