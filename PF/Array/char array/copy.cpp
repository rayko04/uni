#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	char str[SIZE];
	char str2[SIZE];
	
	cout << "Enter string: ";
	cin.getline(str, SIZE);
	
	int i = 0;
	while(str[i] != '\0')
	{
		str2[i] = str[i];
		i++;
	}
	
	cout << "string 1: " << str << endl;
	cout << "string 2: " << str2 << endl;

	return 0; 
}