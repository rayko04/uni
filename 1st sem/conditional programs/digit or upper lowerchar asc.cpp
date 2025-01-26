/* Q 26.	Any character is entered by the user; write a program to determine whether the character entered
 is a capital letter, a small case letter, a digit or a special symbol. The following table shows the range of 
 ASCII values for various characters.
Characters	ASCII Values
A – Z	65 – 90
a – z	97 – 122
0 – 9	48 – 57
special symbols	0 - 47, 58 - 64, 91 - 96, 123 – 127

*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Input character: ";
	cin>>ch;
	
	if(ch>64 && ch<91)
	cout<<"Upper case alphabet.";
	if(ch>96 && ch<123)
	cout<<"Lowe case alphabet.";
	if(ch>47 && ch<58)
	cout<<"Digit";
	if(ch>=0 && ch<48)
	cout<<"special letters";
    if(ch>57 && ch<65)
	cout<<"special letters";
	if(ch>90 && ch<97)
	cout<<"special letters";
	if(ch>122 && ch<128)
	cout<<"special letters";


	return 0;
}