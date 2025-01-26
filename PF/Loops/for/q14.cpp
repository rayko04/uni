/*  Question 14 	Write a program that enter a number from the use. The program find the sum of all digits 
 of this number and display the sum on the screen

*/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int no,mod,sum=0;
	cout<<"Enter No: ";
	cin>>no;
	
	for(no; no>0; no=no/10)
	{
		mod = no % 10;
		sum = sum + mod;
		
	}
	cout<<"sum is "<<sum;

	return 0;
}
   