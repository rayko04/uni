#include <iostream>
using namespace std;

int main()
{
	int SIZE = 5;
	
	//char array
/*	char arr[SIZE] = {'a','s','d','f','g'};

	cout << arr;

	//string char array
	char arr[SIZE+1] = "asdfg";

	cout << arr;
*/

	//char array
	char arr[SIZE];      
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "enter ch: ";
		cin >> arr[i];
	}

	cout << arr;
/*		
	
	//string char array
	char arr[SIZE+1];
	
	cout << "enter string to be stored: ";
	cin.getline(arr, SIZE+1);                    /* getline needed for only more than 1 word */
	
	cout << arr[4];
*/	
	return 0;
}