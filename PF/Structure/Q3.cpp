/* 
	Question 3: Write a program that declares a structure Student to store 
	Roll No, English, physics, computer subject Marks, average marks of a student. 
	The program should define a structure variable, inputs the values, 
	finds the average and then displays the student values on the screen.

*/
#include <iostream>

struct Student
{
	int roll;
	int eng;
	int phy;
	int comp;
	float avg;
};

void getInput(Student &s1)
{
	std::cout << "Enter Roll No: ";
	std::cin >> s1.roll;	
	std::cout << "Enter Marks in English: ";
	std::cin >> s1.eng;
	std::cout << "Enter Marks in Physics: ";
	std::cin >> s1.phy; 
	std::cout << "Enter Marks in Computer: ";
	std::cin >> s1.comp; 
}

void showValues(Student s1)
{
	std::cout << "\nRoll No: " << s1.roll << std::endl;
	std::cout << "Average: " << s1.avg << std::endl;
}

int main()
{
	Student s1;
	
	getInput(s1);
	s1.avg = (s1.eng + s1.comp + s1.phy) / 3.0f;
	showValues(s1);

	return 0;
}