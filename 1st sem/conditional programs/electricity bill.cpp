/* Q 24.	Write a program that calculates the electricity bill. The rate of electricity per unit as follows.
•	If the units consumed are <=100, then the cost is Rs. 5.5/- per unit.
•	If the units consumed are <100 and <=250, then the cost is Rs. 7.5/- per unit.
•	If the units consumed exceed <250, then the cost is Rs. 10.5/- per unit.
A line rent Rs. 50 is also added to the bill and surcharge of 7% extra if the bill exceeded Rs. 1500/-.calculate the total bill.


*/
#include<iostream>
using namespace std;
int main()
{
	int units;
	cout<<"Input Units Consumed: ";
	cin>>units;
    float bill,total;
    
	

	if(units<=100)
	{
		cout<<"Cost per unit = Rs5.5"<<endl;
		cout<<"Line rent = Rs50"<<endl;
		bill = 5.5*units + 50;
		cout<<"Total Bill is"<<bill<<endl;
	}
	
	else if(units<100 && units>=250)
	{
	    cout<<"Cost per unit = Rs7.5"<<endl;
		cout<<"Line rent = Rs50"<<endl;
		bill = 7.5*units + 50;
		cout<<"Total Bill is"<<bill<<endl;
	}
	
    else
	{
		cout<<"Cost per unit = Rs10.5"<<endl;
		cout<<"Line rent = Rs50"<<endl;
		bill = 10.5*units + 50;
        cout<<"Total Bill is"<<bill<<endl;	
	}
	
	
	if(bill>1500)
	{
		total = 0.7*bill + bill;
	    cout<<"Bill after surcharge is "<<total;
	}	
	
	
	return 0;
}