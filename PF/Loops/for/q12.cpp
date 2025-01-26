/* Question 12 	Write a program that enter a number from the use. The program reveres the given integer number and display it on the screen.
  
 
 */
#include<iostream>
using namespace std;
int main() {
	
	int no,mod,rno=0;
	cout<<"Input No: ";
	cin>>no;
	
	for(no; no>0; no=no/10)
	{
		mod = no%10;
		rno = rno*10 + mod;
	}
	cout<<"Reversed No is "<<rno;
}  