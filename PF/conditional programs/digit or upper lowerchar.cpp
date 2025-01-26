/* Q 26.	Any character is entered by the user;
 write a program to determine whether the character entered is
  a capital letter, a small case letter, a digit or a special symbol. 

*/
#include<iostream>
using namespace std;
int main()
{
	char a;
	cout<<"Input a character: ";
	cin>>a;
	
	if(isalpha(a))
	{
		cout<<"Alphabet";
		if(isupper(a))
		   cout<<" Upper case";
		else
		   cout<<" Lower case";
		    
	}
	else if(isdigit(a))
	    cout<<"Digit";
    else
        cout<<"Special letter";

     
	return 0;
}