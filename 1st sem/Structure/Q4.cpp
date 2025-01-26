/* 
	Question 4: 
	Write a program that declares a structure to store Computer id (int), 
	brand name(string) and price(float) of a computer. 
	It defines two structure variables and inputs values. 
	It displays the record of costliest computer on the screen.

*/

#include <iostream>

struct Computer
{
	int id;
	std::string brand;
	float price;	
};

int main()
{ 
	constexpr int SIZE = 5;
	Computer c[SIZE];
	
	std::cout << "Input Computer Id: ";
	std::cin >> c[0].id;
		
	std::cout << "Input Brand name: ";
	std:: cin >> c[0].brand;
		
	std::cout << "Input Price: ";
	std::cin >> c[0].price;
	
	std::cout << std::endl;

	float cost = c[0].price;
	Computer record = c[0];
	 
	for(int k = 1; k < SIZE; k++)
	{
		std::cout << "Input Computer Id: ";
		std::cin >> c[k].id;
		
		std::cout << "Input Brand name: ";
		std:: cin >> c[k].brand;
		
		std::cout << "Input Price: ";
		std::cin >> c[k].price;
		
		if(cost < c[k].price)
		{
			record = c[k];
			cost = c[k].price;
		}
		
		std::cout << std::endl;	
	}
	
	std::cout << "\nCostliest Computer is as follows: " << std::endl;
	
	std::cout << "\nId: "       << record.id    << std::endl;
	std::cout << "Brand Name: " << record.brand << std::endl;
	std::cout << "Price: "      << record.price << std::endl;
	
	return 0;
}