/* Q 1.	Write a program to determine whether the seller has made profit or incurred loss.
 Also determine how much profit he made or loss he incurred. Cost price and selling price of an item is input by the user.

*/
#include<iostream>
using namespace std;
int main()
{
	int cost,sale,differ;
	cout<<"Cost Price: ";
	cin>>cost;
	cout<<"Sale Price: ";
	cin>>sale;
	
	differ = sale - cost;
	
	if(differ>0)
	{
		cout<<"Incurred Profit of "<<differ<<endl;
		
	}
	else
	cout<<"Incured Loss of "<<abs(differ);
	
    return 0;
}