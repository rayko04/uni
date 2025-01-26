/* Q 1.	Write a program which asks the user to input a no if user enters a negative no the program should output/print an error and exit.

*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	float no;
	cout<<"No: ";
	cin>>no;
	
	if(no<0)
	{
		cout<<"Error"<<endl;
		exit(0);
	}
	cout<<no;
	cout<<"\nThe No is Possitive.";
    return 0;
}