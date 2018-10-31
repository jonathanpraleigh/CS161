/***********************************************************
** Author : Jon Raleigh
** Date : 3/16/17
** Description : Object represents a product with an ID code, title,
**		 description, price, and quantity available.
***********************************************************/

#include "Product.hpp"

Product::Product(std::string id, std::string t, std::string d, double p, int qa)
{  
	idCode = id;
	title = t;
	description = d;
	price = p;
	quantityAvailable = qa;
}
//constructor takes as parameters five values with which to initalize 
//the product's idCode, title, description, price, and quantity.

std::string Product::getIdCode()
{
	return idCode;
}

std::string Product::getTitle()
{
	return title;
}

std::string Product::getDescription()
{
	return description;
}

double Product::getPrice()
{
	return price;
}

int Product::getQuantityAvailable() 
{
	return quantityAvailable;
}

void Product::decreaseQuantity()
{
	quantityAvailable -= 1;
}
