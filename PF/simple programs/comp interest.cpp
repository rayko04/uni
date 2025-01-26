/*  23.	Write a program that inputs principal amount, rate of interest and total time. It calculates the compound interest and displays 
*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float P, R, T;
	
	cout<<"Principle Amount: ";
	cin>>P;
	
	cout<<"Rate of Interest: ";
	cin>>R;
	
	cout<<"Time: ";
	cin>>T;
,	
	float C = P*pow(1+(R/100),T);   
//    float C = ((R/100)*P)*T;        (wrong)
	cout<<"Compound Interest: "<<C;	 
	
	
    return 0;
}