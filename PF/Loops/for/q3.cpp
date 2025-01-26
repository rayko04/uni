/*  Question 3	Write a program that inputs 5 numbers from the user and the display their sum and average.


*/
#include <iostream>
using namespace std;

int main() {
	
	float no, sum=0 ;
	for(int i=1; i<=5; i++)
    {
    	cout<<"Input Number: ";
    	cin>>no;
    	sum = sum + no;
    	
	}
	cout<<"Sum is "<<sum<<endl;
	float average=sum/5.0f;
	cout<<"Average is "<<average;
}
   