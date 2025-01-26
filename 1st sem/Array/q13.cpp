/*  Question 13: Write a program that stores 5, 5 values in two integer arrays.
    Program find the value of the common elements and store them into third arrays.

*/

#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arr[SIZE], arr2[SIZE], arr3[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input Array 1 value: ";
		cin >> arr[i]; 
	}
	
	cout << endl;
	
	for(int j = 0; j < SIZE; j++)
	{
		cout << "Input Array 2 value: ";
		cin >> arr2[j]; 
	}
	
	int k = 0;
	for(int i = 0; i < SIZE; i++)
	{
		for(int j = 0; j < SIZE; j++)
		{
			if( arr[i] == arr2[j] )
			{	
				arr3[k] = arr[i];
				k++ ;                                        // or arr[k++] = arr[i]
		    }	                              
		}
	}
	
	cout << endl;
	
	cout << "Array 3" << endl;
	for(int m = 0; m < k; m++)
	{
		cout << arr3[m] << endl;
	}
	
	return 0;		
}
