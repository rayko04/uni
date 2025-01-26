/* Q 15.	Write a C++ program to input any character and check whether it is alphabet, digit or special character.

*/
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Input character: ";
	cin>>a;
	
	if(isdigit(a))
	   cout<<"It is a digit.";
	else if(isalpha(a))
	   cout<<"It is a character.";
	else
	   cout<<"It is speacial character.";     
	
    return 0;
}