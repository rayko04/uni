/* Q 25.	Write a program that displays the following menu for a parking area.
•	Enter B for Bike
•	Enter C for car
•	Enter T for truck
The program inputs the type of vehicle and number of days to park the vehicle. It finally displays the total charges for the parking according to the following.
•	Bike Rs. 300/- per day
•	Car Rs. 5000/- per day
•	Truck Rs. 10000/- per day


*/
#include<iostream>
using namespace std;
int main()
{
	char vehicle;
	cout<<"Vehicle Type "<<"\nInput as B/C/T: ";
	cin>>vehicle;
	
	int days,charges;
	cout<<"Number of Days: ";
	cin>>days;
	
	if(vehicle == 'B')
	   charges = 300*days;
	
	else if(vehicle == 'C')
	   charges = 5000*days;
	else if(vehicle == 'T')
	   charges = 10000*days;
	else
	   cout<<"Invalid Entry!"<<endl;
	   
	cout<<"Total Parking Charges: "<<charges;     
	return 0;
}