#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	char str[SIZE];
	
	cout << "Enter string: ";
	cin.getline(str, SIZE);
	
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	
	cout << "string is \"" << str <<"\" with length " << i << endl;
	
	return 0; 
}