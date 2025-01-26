/*  Question 12:Write a program that stores 10 values in an array of type integers. It calculates 
    and displays the difference between the largest and smallest values in an array.

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
	
	int min = arr[0], max = arr[0];
	int diff;
	
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
		
		diff = max - min;
	}
	
	cout << "\nMax: " << max << endl;
	cout << "\nMin: " << min << endl;
	cout << "\nDiff: " << diff << endl;
	
	
	return 0;		
}
