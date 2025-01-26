#include <iostream>
using namespace std;

int main()
{
	constexpr int size = 500;
	char str[size], str2[size];
	
	cout << "Enter string: ";
	cin.getline(str, size);
	
	cout << "Enter string2: ";
	cin.getline(str2, size);
	
/*	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	
	str[i++] = ' ';
	
	int j = 0;
	while(str[j] != '\0')
	{
		str[i++] = str2[j++];
	} */
	
	strcat(str, " ");     // double must
	strcat(str, str2);
	
	cout << str << endl;
	
	return 0;
}