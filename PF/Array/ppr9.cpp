#include <iostream>
using namespace std;

int findCommon(int size, int arr[], int arr2[], int arr3[])
{
	int k = 0;
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size; j++)
		{
				if( arr[i] == arr2[j] )
				{
					if(arr2[j] != -1)
					{
						arr2[j] = -1;	
						arr3[k++] = arr[i];	
						break;				
					}
					
					else if(arr2[j] == -1)
						break;
					else 
						continue;		
				}
		}			
		
	}
	
	return k;
}

int main()
{
	constexpr int SIZE = 10;
	int arr[SIZE], arr2[SIZE];
	
	cout << "Input First Array" << endl;
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Enter Value: ";
		cin >> arr[i];
	}
		
	cout << "\nInput Second Array" << endl;
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Enter Value: ";
		cin >> arr2[i];
	}
	
	int arr3[SIZE];
	int k = findCommon(SIZE, arr, arr2, arr3);
	
	cout << "\nArray 3 is as: " << endl;
	
	if(k != 0)
	{
		for(int i = 0; i < k; i++)
		{
			cout << arr3[i] << endl;		
		}
	}
	else
		cout << "No Common";
	
	return 0;
}