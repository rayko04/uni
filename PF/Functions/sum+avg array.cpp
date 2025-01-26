#include <iostream>
using namespace std;

void getArray(int ar[], int SIZE)
{
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Input value: ";
		cin >> ar[i];
	}
	
}

float sumArray(int arr[], int size)
{
	float sum1 = 0;
	for(int i = 0; i < size; i++)
	{
		sum1 = sum1 + arr[i];
	}
	return sum1;
//	cout << "\nSum is " << sum << endl;         if use void like done avg
} 

void avgArray(int ar[], int size, float sum1)
{
	float avg;
	for(int i = 0; i < size; i++)
	{
		avg = sum1 / size;
	}
	cout << "\nAvg is " << avg << endl;
}

int main()
{
	const int SIZE = 5;
	int arr[SIZE];
	getArray(arr, SIZE);        // only name of array ie arr not arr[SIZE]
	
	float sum = sumArray(arr, SIZE);
	cout << "\nSum is " << sum << endl;
	
	avgArray(arr, SIZE, sum);
	
	
	return 0;
}