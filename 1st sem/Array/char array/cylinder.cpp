#include <iostream>
#include <string.h>
using namespace std;

const int size = 100;
struct Cylinder
{
	float radius;
	float height;
	char cylindertype[size];
};

int compareCylinder(Cylinder c1, Cylinder c2)
{
	float a1 = 2*3.14*c1.radius*(c1.radius+c1.height);
	float a2 = 2*3.14*c2.radius*(c2.radius+c2.height);
	
	if(a1 == a2 && strcmp(c1.cylindertype, c2.cylindertype) == 0)
		return 1;
	else
		return -1;			
}

int main()
{
	Cylinder c1, c2;
	
	cout << "Enter radius C1: ";
	cin >> c1.radius;
	cout << "Enter height C1: ";
	cin >> c1.height;
	cout << "Enter type C1: ";
	cin >> c1.cylindertype;
	
	cout << "Enter radius C2: ";
	cin >> c2.radius;
	cout << "Enter height C2: ";
	cin >> c2.height;
	cout << "Enter type C2: ";
	cin >> c2.cylindertype;
	
	int result = compareCylinder(c1, c2);
	
	if(result == 1)
		cout << "matching";
	else
		cout << "non matching";
		
	return 0;	
}