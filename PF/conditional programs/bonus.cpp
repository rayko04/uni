/* Q 14.	Write a program that inputs salary and grade.
 It adds 70% bonus if the grade is greater than 17.it adds 
 25% bonus if the grade is 17 or less and then display the total salary.
*/
#include<iostream>
using namespace std;
int main()
{
	int salary, grade;
	cout<<"salary: ";
	cin>>salary;
	cout<<"Grade: ";
	cin>>grade;
	
	if(grade>17)
	{
		float bonus = 0.7*salary;
		cout<<"Bonus recieved is "<<bonus<<endl;
		float total = salary + bonus;
		cout<<"Total salary is "<<total;
	} 
	
	else
	{
		float bonus = 0.25*salary;
		cout<<"Bonus recieved is "<<bonus<<endl;
		float total = bonus + salary;
		cout<<"Total salary is "<<total;
	}
	
	
    return 0;
}