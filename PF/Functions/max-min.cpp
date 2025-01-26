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

int maxValue(int arr[], int SIZE)
{
	int max1 = arr[0];
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] > max1)
			max1 = arr[i];
	}
	
	return max1;
}

int minValue(int arr[], int SIZE)
{
	int min1 = arr[0];
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i] < min1)
			min1 = arr[i];
	}
	return min1;
}

void secondMaxValue(int arr2[], int SIZE)
{
	int max1 = arr2[0];
	for(int i = 0; i < SIZE; i++)
	{
		if(arr2[i] > max1)
			max1 = arr2[i];
	}
	cout << "Second Max: " << max1 << endl;
}

void secondMinValue(int arr2[], int SIZE)
{
	int min1 = arr2[0];
	for(int i = 0; i < SIZE; i++)
	{
		if(arr2[i] < min1)
			min1 = arr2[i];
	}
	cout << "Second Min: " << min1 << endl;
}


int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	getArray(arr, SIZE);
	
	int max = maxValue(arr, SIZE);
	cout << "Max value: " << max << endl;
	
	int min = minValue(arr, SIZE);
	cout << "Min value: " << min << endl;
	
	int arr2[SIZE];
	int k = 0;
	
	for(int i = 0; i < SIZE; i++)
	{
		if((arr[i] < max) && (arr[i] > min))
			arr2[k++] = arr[i];		
	}
	
	secondMaxValue(arr2, k);
	
	secondMinValue(arr2, k);
	
	return 0;
}