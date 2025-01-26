/*  Question 10: Write a program that stores 10 values in an array of type integers. 
    Program count and display the total number of duplicate elements in an array.

*/

#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 10;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input value: ";
		cin >> arr[i]; 
	}
	
	int count = 0;                                            //  4,5,4,2,9,2
	
	for(int i = 0; i < SIZE; i++)
	{
		
		for(int j = (i+1); j < SIZE; j++)
		{
			if(arr[j] == arr[i])
				count++ ;
		}
	}
	
	cout << "No of repeated numbers: " << count << endl;
	
	return 0;		
}
