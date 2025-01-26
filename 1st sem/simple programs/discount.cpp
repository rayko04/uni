#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a,d;
	cout<<"amount: ";
	cin>>a;
	cout<<"discount: ";
	cin>>d;
	float da = (d/100)*a;         /* d must be float as needed a float ans in division*/
	float pa = a-da;
	cout<<"payed amount: "<<pa;
	

	return 0;
}