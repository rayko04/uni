/*  Q 19.	Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
•	Basic Salary <= 10000 : HRA = 20%, DA = 80%
•	Basic Salary <= 20000 : HRA = 25%, DA = 90%
•	Basic Salary > 20000 : HRA = 30%, DA = 95%

*/
#include<iostream>
using namespace std;
int main()
{
	int salary;
	cout<<"Basic salary: ";
	cin>>salary;
	
	float gross,hra,da;
	
	if(salary <= 10000)
	gross = 0.2*salary + 0.8*salary + salary;
	
	else if(salary<=20000)
	gross = 0.25*salary + 0.9*salary + salary;
	
	else
	gross = 0.3*salary + 0.95*salary + salary;
	
	cout<<"Gross is "<<gross;
	return 0;
}