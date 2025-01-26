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

void getInput(int SIZE, Computer c[])
{
	for(int k = 0; k < SIZE; k++)
	{
		std::cout << "Input Computer Id: ";
		std::cin >> c[k].id;
		
		std::cout << "Input Brand name: ";
		std:: cin >> c[k].brand;
		
		std::cout << "Input Price: ";
		std::cin >> c[k].price;
		
		std::cout << std::endl;
	}
}

Computer findCost(int SIZE, Computer c[], Computer record, float cost)
{
	for(int k = 1; k < SIZE; k++)
	{
		if(cost < c[k].price)
		{
			record = c[k];
			cost = c[k].price;
		}	
		std::cout << std::endl;	
	}
	
	return record;
}

void showValues(Computer record)
{
	std::cout << "\nCostliest Computer is as follows: " << std::endl;
	
	std::cout << "\nId: "       << record.id    << std::endl;
	std::cout << "Brand Name: " << record.brand << std::endl;
	std::cout << "Price: "      << record.price << std::endl;
}

int main()
{ 
	constexpr int SIZE = 5;
	Computer c[SIZE];
	
	getInput(SIZE, c);
	
	float cost = c[0].price;                           //can define in function
	Computer record = c[0];
	
	record = findCost(SIZE, c, record, cost);
	
	showValues(record);
	
	return 0;
}