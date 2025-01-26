/* 
	Write a program that creates a structure Player that represents the fields of Player like name 
	(string), and batting time in hours (int), minutes (int), and seconds (int). In the main program,
	the user calls a function Getdata (Player&) that enters the two-player details (name and batting time in hour, minutes, and second).
	This program also has a user-defined function BestPlayer (Player, Player) 
	that calculates and displays the name of the best player who has greater playing time.

*/
#include <iostream>
using namespace std;

struct Player
{
	string name;
	int hours;
	int minutes;
	int seconds;	
};

void getData(Player &p)
{
	cout << "Enter name: ";
	cin >> p.name;
	cout << "Enter hours: ";
	cin >> p.hours;
	cout << "Enter minutes: ";
	cin >> p.minutes;
	cout << "Enter seconds: ";
	cin >> p.seconds;
	cout << endl;
}

void bestPlayer(Player p11, Player p22)
{
	int time1 = (p11.hours*3600) + p11.minutes*60 + p11.seconds;
	int time2 = (p22.hours*3600) + p22.minutes*60 + p22.seconds;
	
	if(time1 < time2)
		cout << p22.name << endl;
	else
		cout << p11.name << endl;	
}

int main()
{
	Player p1, p2;
	getData(p1);
	getData(p2);
	
	bestPlayer(p1, p2);
}