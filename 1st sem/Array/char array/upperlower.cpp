#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	char str[SIZE];
	char str2[SIZE];
	
	cout << "Enter string: ";
	cin.getline(str, SIZE);
	
	int i = 0, upper = 0, lower = 0, digit = 0, special = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		else if(str[i] >= 'a' && str[i] <= 'z')
			lower++;
		else if(str[i] >= '0' && str[i] <= '9')
			digit++;
		else
			special++;	
		i++;
	}
	
	cout << "Upper: "   << upper   << endl;
	cout << "lower: "   << lower   << endl;
	cout << "digit: "   << digit   << endl;
	cout << "special: " << special << endl;
	

	return 0; 
}