/* Q 2.	Write a program to calculate the total expenses. Quantity (int) and price (float) 
per item are input by the user and discount of 10% is offered if the expense is more than 5000.
*/
#include<iostream>

using namespace std;
int main()
{
	int quantity;
	cout<<"Quantity: ";
	cin>>quantity;
	
	float price;
	cout<<"Price: ";
	cin>>price;
	
	float expense = quantity*price;
	float discount;
	if(expense>5000)
	 {
	 	discount = 0.1*expense;
	 	expense = expense-(0.1*expense);
	 	
	 	cout<<"Discount: "<<discount<<endl;
	 	
		 }	
	cout<<"Expense:  "<<expense<<endl;
    return 0;
}