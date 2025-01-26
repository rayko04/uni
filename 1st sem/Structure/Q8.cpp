/* 
	Question 8: Write a program that creates a structure Player that store distance covered by the 
	player along with the minutes and seconds taken to cover the distance. 
	The program should input the record of two players and then display the record of the winner player.
*/
#include <iostream>
using namespace std;

struct Player
{
	float distance;
	int min;
	int sec;
};

int main()
{
	constexpr int SIZE = 2;
	Player p[SIZE];
	
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Distance in meters: ";
		cin >> p[i].distance;
		cout << "Minutes: ";
		cin >> p[i].min;
		cout << "Seconds: ";
		cin >> p[i].sec;	
		
	}
			
	int time1 = (p[0].min*60) + p[0].sec;
	int speed1 = p[0].distance / time1;
	
	int time2 = (p[1].min*60) + p[1].sec;
	int speed2 = p[1].distance / time2;
	
	cout << "\n Record of Winner: " << endl;
	
	if(speed1 > speed2) 
	{
		cout << "Distance in meters: " << p[0].distance << endl;
		cout << "Minutes: "            << p[0].min      << endl;
		cout << "Seconds: "            << p[0].sec      << endl;
	}	

	else
	{
		cout << "Distance in meters: " << p[1].distance << endl;
		cout << "Minutes: "            << p[1].min      << endl;
		cout << "Seconds: "            << p[1].sec      << endl;
	}	
	
	return 0;
}