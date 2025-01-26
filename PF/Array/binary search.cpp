// BINARY SEARCH                                                
#include <iostream>
using namespace std;
int main()
{
	const int SIZE = 11;
	int arr[SIZE]  = {12,34,56,57,59,69,70,74,76,83,90};         // only works with sorted arrays
	
	int key;
	cout << "Input Search No: ";
	cin >> key;
	
	int found = -1;
	
	int low = 0;
	int high = SIZE - 1;
	
	for(int i = low; i <= high; i++)              //or for(; low <= high; )
	{
		int middle = low + (high - low) / 2;
		cout << "middle index: " << middle << endl;
		
		if( key < arr[middle] )
			high = middle - 1;
		
		else if( key > arr[middle] )
			low = middle + 1;
		
		else
		{
			found = middle;
			break;                             // must if use infinite loop
		}
		
	}
	
	if( found != -1)
		cout << key << " found at index " << found << endl;

	else
		cout << key << " not found." << endl;
	
	return 0;		
}