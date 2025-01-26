/* 22.	Write a program that inputs the name, Basic Salary of the employee. The program calculates 35% dearness allowance,
 25% house rent of the employee from the basic salary then displays the gross salary 
which is adds basic salary, dearness allowance and house rent of the employee

*/
#include<iostream>
using namespace std;
int main()
{
	string name;
	int salary;
	
	cout<<"Name: ";
	cin>>name;
	cout<<"Salary: ";
	cin>>salary;
	
	float allowance = 0.35*salary;                     //cant do 35/100 as they are int and will result in int ans(0)
	cout<<"Dearness Allowance: "<<allowance<<endl;     //or will have to change 35/100 to float first
	float rent = 0.25*salary;
	cout<<"House Rent: "<<rent<<endl;
	
	float gross = salary+rent+allowance;
	cout<<"Gross Salary: "<<gross;
	
    return 0;
}