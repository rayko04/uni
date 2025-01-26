/*  Question 11: Write a program that stores 10 values in an array of type integers. 
    Finds the sum of all those values which are less than the average of all values 
	of the array.

*/

#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input value: ";
		cin >> arr[i]; 
	}
	
	float avg, sum = 0, sum2 = 0;
	for(int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
		avg = sum/SIZE;
		
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] < avg)
			sum2 += arr[i];
	}
	
	cout << "Total sum: " << sum << endl;
	cout << "Average: " << avg << endl;
	cout << "Req sum: " << sum2 << endl;
	
	
	return 0;		
}
