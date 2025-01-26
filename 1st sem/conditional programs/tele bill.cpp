/* Q 21.	Write a program to calculate the monthly telephone bills as per the following rule:
•	Minimum Rs. 200 for upto 100 calls.
•	Plus Rs. 0.60 per call for next 50 calls.
•	Plus Rs. 0.50 per call for next 50 calls.
•	Plus Rs. 0.40 per call for any call beyond 200 calls.

*/
#include<iostream>
using namespace std;
int main()
{
	float bill;
	int calls;
	cout<<"No of calls: ";
	cin>>calls;
	
	if(calls<=100)
	bill = 200;
	else if(calls>100 && calls<=150)
	bill = 200 + 0.60*(calls-100);
	else if(calls>150 && calls<=200)
	bill = 200 + 0.60*(50) + 0.50*(calls-150);
	else
	bill = 200 + 0.60*(50) + 0.50*(50) + 0.40*(calls-200);
	
	cout<<"Telephone bill is "<<bill<<endl;
	return 0;
}