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

void selectionSort(int arr[], int SIZE)
{
	for(int i = 0; i < SIZE-1; i++)
	{
		int min = i;
		for(int j = i+1; j < SIZE; j++)
		{
			if(arr[j] < arr[min])
				min = j;
		}
		swap(arr[min], arr[i]);
	}
}

void showArray(int arr[], int SIZE)
{
	cout << "ARRAY AFTER SORT " << endl;
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Value at index " << i << " is " << arr[i] << endl;
	}
	cout << endl;
}


void binarySearch(int arr[], int SIZE)
{
	int key;
	cout << "Input Search No: ";
	cin >> key;
	
	int found = -1;
	
	int high = SIZE - 1;
	int low = 0;
	
	for(int i = low; i <= high; i++)
	{
		int middle = low + (high - low) / 2;
		
		if(key < arr[middle])
			high = middle - 1;
		else if(key > arr[middle])
			low = middle + 1;
		else
		{
			found = middle;
			break;
		}
	}	
	
	if(found != -1)
		cout << key << " found at index "  << found << endl;
	else
		cout << key << " not found." << endl;
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	getArray(arr, SIZE);
	
	selectionSort(arr, SIZE);
	
	showArray(arr, SIZE);
	
	binarySearch(arr, SIZE);
	
	return 0;
}