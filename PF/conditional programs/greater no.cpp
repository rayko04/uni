/* Q 5.	Write a program which asks the user to input 3 numbers now determine
 which number is greater and print the result.(using if statement)

*/
#include<iostream>
using namespace std;
int main()
{
	int no1,no2,no3;
	cout<<"Input No1, No2, No3 ";
	cin>>no1>>no2>>no3;
	
	if(no1>no2 && no1>no3)
	cout<<no1<<" is greater.";
	else if(no2>no1 && no2>no3)
	cout<<no2<<" is greater.";
	else
	cout<<no3<<" is greater.";
    return 0;
}