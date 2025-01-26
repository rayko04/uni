/* 
	Question 5: Write a program that uses a structure to store employee number, name, hours worked, 
	hourly rate and gross pay. The program inputs employee number, name, hours worked and 
	hourly rate the user, calculates gross pay and then displays all employee data on screen.

*/
#include <iostream>
using namespace std;

struct Employee
{
	int eNo;
	string name;
	float hours;
	float rate;
	float gross;
};

int main()
{
	Employee E1;
	
	cout << "Enter Employ No: ";
	cin >> E1.eNo;
	cout << "Enter Employ Name: ";
	cin >> E1.name;
	cout << "Enter hours worked: ";
	cin >> E1.hours;
	cout << "Enter hourly rate: ";
	cin >> E1.rate;
	
	E1.gross = (E1.rate) * E1.hours;
	 
	cout << "Name: "         << E1.name  << endl;
	cout << "Employ No: "    << E1.eNo   << endl;
	cout << "Hours Worked: " << E1.hours << endl;
	cout << "Hourly Rate: "  << E1.rate  << endl;
	cout << "Gross Pay: "    << E1.gross << endl;
	
	return 0;
}