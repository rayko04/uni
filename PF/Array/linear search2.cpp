// LINEAR SEARCHING
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
	
	int key;
	cout << "\nInput search No: ";
	cin >> key;
	
	int found = -1;
	
	for(int i = 0; i < SIZE; i++)
	{
		if(key == arr[i])
		{
			found = i;
			break;
			
		}
	}
	
	if(found != -1)
	{
		cout << key << " found at index " << found << endl;
		cout << "Enter new Value: ";
		cin >> arr[found];
	}
	else
		cout << key << " not found " << endl;
		
	for(int i = 0; i < SIZE; i++)
	{
		cout << "value at index " << i << " is " << arr[i] << endl;
	}
	
	return 0;		
}
