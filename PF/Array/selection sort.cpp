// SELECTION SORT
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
	
	cout << endl;
	
	for(int i = 0; i < SIZE - 1; i++)
	{
		int min = i;
		
		for(int j = i+1 ; j < SIZE; j++)
		{
			if( arr[j] < arr[min] )
				min = j;
		}
		
			swap( arr[min] , arr[i]);
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "value at index " << i << " is " << arr[i] << endl;
	}
	return 0;		
}
