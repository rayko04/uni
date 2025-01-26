/* 

*/
#include<iostream>
using namespace std;
int main()
{
	float sum = 0, sign = -1;
	for(int i = 1; i<=5; i+=1)
	{
		sign = -sign;
		sum = sum + (1.0/i)*sign;
		
	}		 	
	cout<<"sum is "<<sum;
	return 0;
}