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
	constexpr int SIZE2 = 3;
	Student s[SIZE2];
	
	for(int k = 0; k < SIZE2; k++)
	{
		std::cout << "Input Roll No: ";
		std::cin >> s[k].roll;
		
		std::cout << "Enter Name: ";
		std::cin >> s[k].name;
		
		for(int i = 0; i < SIZE; i++)
		{
			std::cout << "Enter marks of subject " << i+1 << ": ";
			std::cin >> s[k].marks[i];
		}
		
		std::cout << std::endl;
		
		int sum = 0;
		for(int i = 0; i < SIZE; i++)
		{
			sum += s[k].marks[i];
			s[k].avg = (float)sum / SIZE;
		}
		
		std::cout << "Name: "    << s[k].name << std::endl;
		std::cout << "Roll No: " << s[k].roll << std::endl;
		std::cout << "Average: " << s[k].avg  << std::endl;
		
		std::cout << std::endl;
	}
	
		return 0;
}