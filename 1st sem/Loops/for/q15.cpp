/* Question 15	Write a program that inputs numbers from your till user enters negative number. At 
the end program calculates the average, sum, maximum, and minimum, of all positive numbers.

*/
#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int i,no,sum=0,average,max=0,min=0;
	for( i; no>0; i++)
	{
		cout<<"Input No: ";
		cin>>no;
		
		if(no<0)
		  break;
		else 
		{
		  sum=sum+no;
		  if(no>max)
		  max=no;
		  
		  
		  
		  if(no<min)
		  min=no;
	    }
		
	}
	
	average = sum/i;
	cout<<sum<<endl;
	cout<<average<<endl;
    cout<<max<<endl;
    cout<<min<<endl;        //WRONG
	return 0;
}
   