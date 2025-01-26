// BUBBLE SORT
#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input Value: ";
		cin >> arr[i];
	}
	
	for(int i = 0; i < SIZE-1; i++)
	{
		for(int j = 0; j < SIZE-i-1; j++)
		{
			if( arr[j] > arr[j+1] )
				swap ( arr[j] , arr[j+1] );	
		}
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Value at index " << i << " is " << arr[i] << endl;
	}
	
	return 0;		
}
