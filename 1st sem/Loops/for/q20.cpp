/* Question 20	Write a program to print out the enter number is Armstrong numbers or not.


*/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int no,mod,sum=0;
	cout<<"Input No: ";
	cin>>no;
	
	for(int i=no;i>0;i/=10)
	{
		mod = i % 10;
		sum = sum + pow(mod,3);
		
	}
	
	if(sum==no)
		cout<<"Armstrong Number.";
	else
	    cout<<"NOT";
	return 0;
}
   