/* Q 5.	Write a program which asks the user to input 3 numbers now determine which number is greater and print the result.

*/
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3,no4,max;
	cout<<"input 4 numbers: ";
	cin>>no1>>no2>>no3>>no4;
	
	if(no1>no2)
	{
		if(no1>no3)
		{
			if(no1>no4)
			max = no1;
			else
			max = no4;
			
		}
		else
		{
			if(no3>no4)
			max = no3;
			else
			max = no4;
		}
	}
	else
	{
		if(no2>no3)
		{
			if(no2>no4)
			max = no2;
			else
			max = no4;
		}
		else
		{
			if(no3>no4)
			max = no3;
			else
			max = no4;
		}
	}
	cout<<"Greater no is "<<max;
			
		 	
	return 0;
}