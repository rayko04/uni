/* 
	Write a program that creates a structure Rational which represents Numerator and Denominator by integers in Num and Dnum fields.
	In main, the user calls a user-defined function GetRational (Rational&) that enters the Num and Dnum parts of two Rational numbers.
	This program also calculates the sum of two rational Numbers using a user-defined function. It passes structure variables to user 
	user-defined function AddRational (Rational, Rational) and prints the sum of two Rational numbers on the screen.
*/
#include <iostream>
using namespace std;

struct Rational
{
	int num;
	int dnum;	
};

void getRational(Rational &r)
{
	cout << "Enter Numerator: ";
	cin >> r.num;
	cout << "Enter denominator: ";
	cin >> r.dnum;
		
	cout << endl;
}

void addRational(Rational r11, Rational r22, Rational &r33)
{
	r33.num = (r11.num*r22.dnum) + (r22.num*r11.dnum);   
	r33.dnum = r11.dnum * r22.dnum;
}

int main()
{
	Rational r1, r2;
	getRational(r1);
	getRational(r2);
	
	cout << "Rational 1: " << r1.num << '/' << r1.dnum << endl;
	cout << "Rational 2: " << r2.num << '/' << r2.dnum << endl;
	
	Rational r3;
	addRational(r1, r2, r3);
	
	cout << "Sum: " << r3.num << '/' << r3.dnum << endl;
	
	return 0;
}