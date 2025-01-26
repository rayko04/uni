/* Q 6.	Write a program that input a year from the user and display the entered year is a Leap year or not.
*/
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Input Year: ";
	cin>>year;
	
	int remainder = year % 4;
	
	if(remainder == 0)      //equal ==
	cout<<"It is a leap year.";
	else                     // dont write condition here (wrong)
	cout<<"It is not a leap year.";
    

    return 0;
}