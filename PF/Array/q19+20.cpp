/*  Question 19:Write a program that initializes an array of ten integers. 
    The program finds the second largest element in an array.

*/
#include <iostream>
using namespace std;
int main()
{
	
	const int SIZE = 10;
	int arr[SIZE], arr2[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input Value: ";
		cin >> arr[i];
	}
	
	cout << endl;
	
	int max = arr[0];
	int min = arr[0];
	
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] < min)
			min = arr[i];
		if(arr[i] > max)
			max = arr[i];
	}
	
	int k = 0;
	for(int i = 0; i < SIZE; i++)
	{
		if((arr[i] < max) && (arr[i] > min))
		{
			arr2[k++] = arr[i];      // arr2 on left!
		}
	}
	
	for(int m = 0; m < k; m++)
	{
		arr2[m];
	}
	
	int min2 = arr2[0];
	int max2 = arr2[0];
	
	for(int m = 0; m < k; m++)
	{
		if(arr2[m] < min2)
			min2 = arr2[m];
		if(arr2[m] > max2)
			max2 = arr2[m];	
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	cout << "Second Max: " << max2 << endl;
	cout << "Second Min: " << min2 << endl;
	
	return 0;
}
