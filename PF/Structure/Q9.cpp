/* 
	Question 09: Create a structure called TIME. It three members, all type int, should be called hours, minutes, and seconds. 
	Write a program that create one structure variable in main () and prompts the user to enter a TIME value in hours, minutes, and seconds. 
	The program should then store the time in a variable of type structTIME, then pass structure variable to user define function. 
	The function prints the total number of seconds represented by this time variable.
*/
#include <iostream>
using namespace std;

struct Time
{
	int hours;
	int minutes;
	int seconds;
};

void getInput(Time &t)
{
	cout << "Enter time (hours:minutes:seconds)" << endl;
	cin >> t.hours >> t.minutes >> t.seconds; 
}

int convertToSec(Time t)
{
	
	int tsec = t.hours*3600 + t.minutes*60 + t.seconds;
	
	return tsec;
}

int main()
{
	Time t1;
	
	getInput(t1);
	int tsec = convertToSec(t1);

	cout << "Time in seconds: " << tsec << endl;	
	return 0;
}