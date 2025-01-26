#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	constexpr int size = 500;
	char str[size], str2[size];
	
	cout << "enter string: ";
	cin.getline(str, size);
	
	//copy
	strcpy(str2, str);
	
	cout << str << " " << str2 <<endl;
	
	//concatenate
	strcat(str, " ");
	strcat(str, str2);
	
	cout << str << " " << endl;
	
	//length
	cout << strlen(str) << endl;
	
	if(strcmp(str, str2) == 0)
		cout << "equal";
	else if(strcmp(str, str2) == 1)
		cout << "1st big";
	else if(strcmp(str, str2) == -1)
		cout << "2nd big";		
	
	return 0;
}
