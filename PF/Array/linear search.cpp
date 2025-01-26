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
			found = i;                           // if key is repeated in arr will only find one as variable cant be assigned 2 values
			break;                               // with break; will find first and break while without it, it will later on assign to index of 2nd.            
			
		}
	}
	
	if(found != -1)
		cout << key << " found at index " << found << endl;
	else
		cout << key << " not found " << endl;	
		
	return 0;	
}