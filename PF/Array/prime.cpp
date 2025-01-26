#include <iostream>
using namespace std;

int findPrime(int size, int arr[])
{
	int prime = 0;
	for(int i = 0; i < size; i++)
	{
		if(arr[i] == 1)
			continue;
		else
			{
				int count = 0;
				for(int j = 2; j < arr[i]; j++)
				{					
					if( (arr[i] % j) == 0 )
						count++;		
				}	
				
				if(count == 0)
					prime++;
			}
	}
	
	
	return prime;
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << " input value: ";
		cin >> arr[i];
	}
	
	int prime = findPrime(SIZE, arr);
	
	cout << prime << endl;
	
	return 0;
}
