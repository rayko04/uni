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
	
	cout << endl;
	
	for(int i = 0; i < SIZE; i++)
	{
		if(key == arr[i])
		{
			cout << key << " found at index " << i << endl;
			cout << "Input new Value: ";
			cin >> arr[i];
			
			cout << endl;
		}
	}
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "value at index " << i << " is " << arr[i] << endl;
	}
	
	return 0;		
}
