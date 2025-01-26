/* Q 12.	Write a program to check whether a triangle is valid or not
, when the three angles of the triangle are entered by the user. A triangle
 is valid if the sum of all the three angles is equal to 180 degrees

*/
#include<iostream>
using namespace std;
int main()
{
	float A,B,C;
	cout<<"Input angle A: ";
	cin>>A;
	cout<<"input angle B: ";
	cin>>B;
	cout<<"Input angle C: ";
	cin>>C;
	
	if(A+B+C==180)
	   cout<<"It is valid.";
	else
	   cout<<"It is not valid.";3   
	
    return 0;
}