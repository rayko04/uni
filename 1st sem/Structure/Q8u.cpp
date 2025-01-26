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
	float speed;
	int time;
};

int main()
{
	constexpr int SIZE = 3;
	Player p[SIZE];
	
	
	for(int i = 0; i < SIZE; i++)
	{
		cout << "Distance in meters: ";
		cin >> p[i].distance;
		cout << "Minutes: ";
		cin >> p[i].min;
		cout << "Seconds: ";
		cin >> p[i].sec;
		
		p[i].time = (p[i].min*60) + p[i].sec;
		p[i].speed = p[i].distance / p[i].time;
	}
	
	float tempSpeed = p[0].speed;
	Player record = p[0];
	
	for(int i = 1; i < SIZE; i++)
	{
		if( p[i].speed > tempSpeed )
		{
			tempSpeed = p[i].speed;
			record = p[i];
		}
	}
	
	cout << "\n Record of Winner: " << endl;
	
	cout << "Distance in meters: " << record.distance << endl;
	cout << "Minutes: "            << record.min      << endl;
	cout << "Seconds: "            << record.sec      << endl;
	
	
	return 0;
}