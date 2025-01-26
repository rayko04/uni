/* 
	Write a program that declares a structure Student to store Roll No (int), 
	name (string) and marks of 05 subject (array of integer with const SIZE), 
	average (float) marks of a student. The program should define a structure 
	variable, inputs the values, finds the average and then displays the student values on the screen.

*/

#include <iostream>

constexpr int SIZE = 5;

struct Student
{
	int roll;
	std::string name;
	int marks[SIZE];
	float avg;
};   

int main()
{
	Student a;
	std::cout << "Input Roll No: ";
	std::cin >> a.roll;
	
	std::cout << "Input name: ";
	std::cin >> a.name;
	
	for(int i = 0; i < SIZE; i++)
	{
		std::cout << "Enter marks of subject " << i+1 << ": ";
		std::cin >> a.marks[i];
	}
	
	std::cout << std::endl;
	
	int sum = 0;
	for(int i = 0; i < SIZE; i++)
	{
		sum += a.marks[i];
		a.avg = (float)sum / SIZE;
	}
	
	std::cout << "Name: "    << a.name << std::endl;
	std::cout << "Roll No: " << a.roll << std::endl;
	std::cout << "Average: " << a.avg  << std::endl;
	
		
	return 0;
}