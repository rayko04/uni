/* 21.	Write a program that inputs the x, y coordinates for two points 
and computes distance between two points using the formula: Distance =sqrt(x2 – x1)2 + (y2 - y1)2.
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float x1,x2,y1,y2;
	
	cout<<"x1: ";
	cin>>x1;
	cout<<"y1: ";
	cin>>y1;
	
	cout<<"x2: ";
	cin>>x2;
	cout<<"y2: ";
	cin>>y2;
	
	float distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	cout<<"distance: "<<distance;
	
	
    return 0;
}