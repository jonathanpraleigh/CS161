#include "Customer.hpp"
#include "Product.hpp"
#include "Store.hpp"
#include <iostream>
#include <string>
#include <vector>

int main()
{
	
	std::string customerNameInput;
	std::string customerIdNumberInput;
	std::string productToLocate;
	std::string productToAddToCart;
	std::string idPasser;
	char premiumMemberCharInput;
	char doAgain;
	bool premiumMemberBoolInput;
	bool *pPremiumMemberBoolInput = &premiumMemberBoolInput;
	bool tryAgain;
	bool *pTryAgain = &tryAgain;

	std::cout << "Enter customer name." << std::endl;
	std::cin >> customerNameInput;
	std::cout << "Enter customer ID #." << std::endl;
	std::cin >> customerIdNumberInput;
	std::cout << "Is customer a premium member? (Y or N)" << std::endl;
	std::cin >> premiumMemberCharInput;

	do {
		if (premiumMemberCharInput == 'Y' || premiumMemberCharInput == 'y')
		{
			*pPremiumMemberBoolInput = true;
			*pTryAgain = false;
		}
		else if (premiumMemberCharInput == 'N' || premiumMemberCharInput == 'n')
		{
			*pPremiumMemberBoolInput = false;
			*pTryAgain = false;
		}
		else {
			std::cout << "Please select Y or N" << std::endl;
			std::cin >> premiumMemberCharInput;
			*pTryAgain = true;
		}
	} while (tryAgain == true);

	Customer newCustomer(customerNameInput, customerIdNumberInput, premiumMemberBoolInput);

	Product apple("apple1", "red apple", "one red delicious apple", 0.50, 3);
	Product orange("orange1", "naval orange", "one naval orange", 0.60, 2);
	Product mango("mango1", "fresh mango", "one fresh mango", 1.00, 2);
	Product peach("peach1", "ripe peach", "one ripe peach", 0.75, 4);
	Product pear("pear1", "bosc pear", "one bosc pear", 0.45, 1);

	Store fruitStore;
	fruitStore.addMember(&newCustomer);
	fruitStore.addProduct(&apple);
	fruitStore.addProduct(&orange);
	fruitStore.addProduct(&mango);
	fruitStore.addProduct(&peach);
	fruitStore.addProduct(&pear);

	

	std::cout << "Testing functions" << std::endl;
		
	//Product Search
	std::cout << "Testing product search." << std::endl;

	std::cout 
		<< "Enter the product you want to search." 
		<< "\nYour options are apple, orange, mango, peach, and pear." 
		<< std::endl;
	std::cin >> productToLocate;
	fruitStore.productSearch(productToLocate);
	
	//Add to cart
	do {
		std::cout << "\nTesting add to cart." << std::endl;

		std::cout
			<< "\nEnter the product ID to add to cart."
			<< "\nYour options are apple1, orange1, mango1, peach1, and pear1."
			<< std::endl;

		std::cin >> productToAddToCart;

		idPasser = newCustomer.getAccountID();

		fruitStore.addProductToMemberCart(productToAddToCart, idPasser);

		std::cout << "Success!" << std::endl;

		std::cout << "Do again?" << std::endl;
		std::cin >> doAgain;
	} while (doAgain == 'Y' || doAgain == 'y');

	//Check out.

		std::cout << "Testing check out." << std::endl;
		fruitStore.checkOut(newCustomer.getAccountID());
		std::cout << "Success???" << std::endl;
	
	return 0;
}
