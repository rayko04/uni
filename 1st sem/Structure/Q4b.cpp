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

int main()
{
	constexpr int SIZE = 3;
	Computer c[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		std::cout << "Enter id: ";
		std::cin >> c[i].id;
		
		std::cout << "Enter brand: ";
		std::cin >> c[i].brand;
		
		std::cout << "Enter price: ";
		std::cin >> c[i].price;
		
		std::cout << std::endl;
	}
	
	float rPrice = c[0].price;
	Computer record = c[0];
	
	for(int i = 0; i < SIZE; i++)
	{
		if(c[i].price > rPrice)
		{
			rPrice = c[i].price;
			record = c[i];
		}
	}
	
	std::cout << "\tRecord of costliest Computer is as follows " << std::endl;
	
	std::cout << "id: "    << record.id    << std::endl;
	std::cout << "brand: " << record.brand << std::endl;
	std::cout << "price: " << record.price << std::endl;
	
	
	return 0;
}