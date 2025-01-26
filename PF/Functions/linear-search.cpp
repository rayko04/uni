#include <iostream>
using namespace std;

void getArray(int arr[], int SIZE)
{
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input Value: ";
		cin >> arr[i];
	}
	cout << endl;
}

void linearSearch(int arr[], int SIZE)
{
	int key;
	cout << "Input Search No: ";
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
			cout << key << " found at index " << found << endl;
		else
			cout << key << " not found " << endl;	
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	getArray(arr, SIZE);
	
	linearSearch(arr, SIZE);
	
	return 0;
}