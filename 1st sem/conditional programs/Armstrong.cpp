/* Q 11.	Program to check whether a given number is Armstrong number or not.
For example, 371 is an Armstrong number, since 3*3*3 + 7*7*7 + 1*1*1 = 371.

*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int no;
	cout<<"input No: ";
	cin>>no;
	
	int digit1 = no % 10;
	int no2 = no/10;
	
	int digit2 = no2 % 10;
	int no3 = no2/10;
	
	int digit3 = no3 % 10;
    int no4 = no3/10;
	
	int digit4 = no4 % 10;

	
	int result = pow(digit1,4) + pow(digit2,4) + pow(digit3,4) + pow(digit4,4);       //for 4 digits
	if(result == no)
	   cout<<"It is an armstrong number.";
	else
	   cout<<"It is not an armstrong number.";   
	
    return 0;
}