/* Question 6	Write a program that display Sum+prod of odd numbers from 1 to 100.


*/
#include <iostream>
using namespace std;
int main()
{
	
	int sum = 0; 
	unsigned long long int prod = 1;
	for(int i=1; i<=100;i+=2)
	{
	
	    sum = sum+i;
		prod = prod*i;
	}
	
	cout<<"Sum is "<<sum<<endl;
    cout<<"Product is "<<prod;
	return 0;
}