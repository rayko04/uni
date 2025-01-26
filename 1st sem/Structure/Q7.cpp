/* 
	Question 7: Write a program that creates a structure Complex which represents fields by integers real and imaginary. 
	Program allows the user to enter the real and imaginary parts of two complex numbers. 
	This program calculates the sum of two complex numbers which will be entered by the user.
	Program will add real parts and imaginary parts of complex numbers and prints the sum of complex number on the screen.
*/
#include <iostream>
using namespace std;

struct Complex
{
	int real;
	int imagin;
};

int main()
{
	Complex c1, c2;
	
	cout << "Enter Real Part: ";
	cin >> c1.real;
	cout << "Enter Imaginary Part: ";
	cin >> c1.imagin;
	
	cout << "Enter Real Part: ";
	cin >> c2.real;
	cout << "Enter Imaginary Part: ";
	cin >> c2.imagin;
	
	Complex c3;
	
	c3.real = c1.real + c2.real;
	c3.imagin = c1.imagin + c2.imagin;
	
	cout << "\nComplex No1: " << c1.real << " + i" << c1.imagin;
	cout << "\nComplex No2: " << c2.real << " + i" << c2.imagin;
	cout << "\nSum: " << c3.real << " + i" << c3.imagin << endl;
	
	return 0;
}