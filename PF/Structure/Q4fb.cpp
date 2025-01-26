/*
	Question 4: Write a program that declares a structure to store Computer id (int), brand name(string) and price(float) of a computer. 
	It defines two structure variables and inputs values. It displays the record of costliest computer on the screen.
*/

#include <iostream>

struct Computer
{
	int id;
	std::string brand;
	float price;
};

void getInput(Computer &c)
{
	std::cout << "Enter id: ";
	std::cin >> c.id;
	
	std::cout << "Enter brand: ";
	std::cin >> c.brand;
	
	std::cout << "Enter price: ";
	std::cin >> c.price;
	std::cout << std::endl;
	
}

void getRecord(Computer a, Computer b)
{
	std::cout << "\tRecord of costliest Computer is as follows " << std::endl;
	if(a.price > b.price)
	{
		std::cout << "id: "    << a.id    << std::endl;
		std::cout << "brand: " << a.brand << std::endl;
		std::cout << "price: " << a.price << std::endl;
	}
	else
	{
		std::cout << "id: "    << b.id    << std::endl;
		std::cout << "brand: " << b.brand << std::endl;
		std::cout << "price: " << b.price << std::endl;
	}
		
}

int main()
{
	Computer a;
	getInput(a);
	
	Computer b;
	getInput(b);
	
	getRecord(a, b);
	
	return 0;
}