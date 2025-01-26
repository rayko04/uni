#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 50;
	char str[SIZE];
	char str2[SIZE];
	
	cout << "Enter string: ";
	cin.getline(str, SIZE);
	
	int i = 0, word = 0;
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\0')      //or jus add one at end
			word++;
		
		i++;	
	}
	
	cout << "word: " << word << endl;

	return 0; 
}